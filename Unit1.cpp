//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGraphicEditor *GraphicEditor;
//---------------------------------------------------------------------------
__fastcall TGraphicEditor::TGraphicEditor(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::FormActivate(TObject *Sender)
{
	this->DrawMode = 3;  // pencil mode
    this->FilePath = "";
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::PenSizeTrackBarChange(TObject *Sender)
{
	this->PaintAreaImage->Canvas->Pen->Width = this->PenSizeTrackBar->Position;
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::DetailedColorSelectionBtnClick(TObject *Sender)
{
	if (this->ColorDialog->Execute()) {
		this->SelectedColor = this->ColorDialog->Color;
	}
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::ColorGridChange(TObject *Sender)
{
	this->SelectedColor = this->ColorGrid->ForegroundColor;
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::PaintAreaImageMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	this->PaintAreaImage->Canvas->Pen->Color = this->SelectedColor;
	this->PaintAreaImage->Canvas->Brush->Style = bsClear;  // remove shape filling
	this->PaintAreaImage->Canvas->MoveTo(X, Y);  // starting pos of pen

	this->StartX = X;
	this->StartY = Y;
	this->MouseDown = true;
	this->MouseUp = false;

	this->Draw(this->PaintAreaImage->Canvas, X, Y);
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::PaintAreaImageMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	if (this->MouseDown) {
		this->Draw(this->PaintAreaImage->Canvas, X, Y);
	}
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::PaintAreaImageMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	this->MouseUp = true;

	if (this->MouseDown) {
		this->Draw(this->PaintAreaImage->Canvas, X, Y);
	}

	this->MouseDown = false;
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::LineImgBtnClick(TObject *Sender)
{
	this->DrawMode = 0;
	this->ToolTypeLbl->Caption = "Инструмент: Прямая";
}
//---------------------------------------------------------------------------

void __fastcall TGraphicEditor::CircleImgBtnClick(TObject *Sender)
{
	this->DrawMode = 1;
	this->ToolTypeLbl->Caption = "Инструмент: Эллипс";
}
//---------------------------------------------------------------------------

void __fastcall TGraphicEditor::RectImgBtnClick(TObject *Sender)
{
	this->DrawMode = 2;
	this->ToolTypeLbl->Caption = "Инструмент: Прямоугольник";
}
//---------------------------------------------------------------------------

void __fastcall TGraphicEditor::PencilImgBtnClick(TObject *Sender)
{
	this->DrawMode = 3;
	this->ToolTypeLbl->Caption = "Инструмент: Карандаш";
}
//---------------------------------------------------------------------------

void __fastcall TGraphicEditor::EraserImgBtnClick(TObject *Sender)
{
	this->DrawMode = 4;
	this->ToolTypeLbl->Caption = "Инструмент: Ластик";
}
//---------------------------------------------------------------------------

void __fastcall TGraphicEditor::FillerImgBtnClick(TObject *Sender)
{
	this->DrawMode = 5;
	this->ToolTypeLbl->Caption = "Инструмент: Заливка";
}
//---------------------------------------------------------------------------

void __fastcall TGraphicEditor::RoundRectImgBtnClick(TObject *Sender)
{
	this->DrawMode = 6;
	this->ToolTypeLbl->Caption = "Инструмент: Округленный прямоугольник";
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::ColorDropperImgBtnClick(TObject *Sender)
{
	this->DrawMode = 7;
	this->ToolTypeLbl->Caption = "Инструмент: Пипетка";
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::TextImgBtnClick(TObject *Sender)
{
	this->DrawMode = 8;
	this->ToolTypeLbl->Caption = "Инструмент: Текст";
}
//---------------------------------------------------------------------------
void TGraphicEditor::Draw(TCanvas *PaintAreaCanvas, int X, int Y)
{
	switch (this->DrawMode)
	{
		case 0:  // line
			if (this->MouseUp) {
				PaintAreaCanvas->LineTo(X, Y);
			}
			break;

		case 1:  // ellipse
			if (this->MouseUp) {
				PaintAreaCanvas->Ellipse(this->StartX, this->StartY, X, Y);
			}
			break;

		case 2:  // rect
			if (this->MouseUp) {
				PaintAreaCanvas->Rectangle(this->StartX, this->StartY, X, Y);
            }
			break;

		case 3:  // pencil
			PaintAreaCanvas->LineTo(X, Y);
			this->StartX = X;
			this->StartY = Y;
			break;

		case 4:  // eraser
			PaintAreaCanvas->Pen->Color = clWhite;
			PaintAreaCanvas->LineTo(X, Y);
			this->StartX = X;
			this->StartY = Y;
			break;

		case 5:  // filler
			if (!this->MouseUp)
			{
				// Brush is for filling shapes
				PaintAreaCanvas->Brush->Color = this->SelectedColor;
				// fill shape of ColorToFill until encounter a different color as boundary
				PaintAreaCanvas->FloodFill(X, Y, PaintAreaCanvas->Pixels[X][Y], fsSurface);
				this->MouseDown = false;
			}
			break;

		case 6:  // rounded rect
			if (this->MouseUp) {
				PaintAreaCanvas->RoundRect(this->StartX, this->StartY, X, Y, 30, 30);
			}
			break;

		case 7:  // color dropper
			if (!this->MouseUp) {
				this->SelectedColor = PaintAreaCanvas->Pixels[X][Y];
				this->MouseDown = false;
			}
			break;

		case 8:  // color dropper
			if (this->MouseUp) {
                PaintAreaCanvas->Font->Color = this->SelectedColor;
				PaintAreaCanvas->Font->Size = StrToInt(this->FontSizeComboBox->Text);
				PaintAreaCanvas->Font->Style = this->GetFontStyle();

				TRect TextRect(this->StartX, this->StartX, X, Y);
				UnicodeString Text;
				if (InputQuery("Текст", "Введите текст", Text)) {
					PaintAreaCanvas->TextRect(TextRect, this->StartX, this->StartY, Text);
				}
				this->MouseDown = false;
			}
			break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::FileOpenBtnClick(TObject *Sender)
{
	/* Open image file*/
	if (this->OpenPictureDialog->Execute())
	{
		TBitmap *BmpImage = new TBitmap;
		TPngImage *PngImage = new TPngImage;
		TJPEGImage *JpegImage = new TJPEGImage;

		this->FilePath = this->OpenPictureDialog->FileName;
		AnsiString FileExt = ExtractFileExt(FilePath);

		if (FileExt == ".png" || FileExt == ".PNG") {
			PngImage->LoadFromFile(this->FilePath);
			this->PaintAreaImage->Canvas->Draw(0, 0, PngImage);
		}
		else if (FileExt == ".jpeg" || FileExt == ".jpg") {
			JpegImage->LoadFromFile(this->FilePath);
			this->PaintAreaImage->Canvas->Draw(0, 0, JpegImage);
		}
		else {
			BmpImage->LoadFromFile(this->FilePath);
			this->PaintAreaImage->Canvas->Draw(0, 0, BmpImage);
		}

		this->FileNameLbl->Caption = "Файл: " + ExtractFileName(this->FilePath);

		PngImage->Free();
		JpegImage->Free();
		BmpImage->Free();
	}

}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::FileSaveBtnClick(TObject *Sender)
{
	/* Save image file*/
	if (this->FilePath == "") {
		this->FileSaveAsBtnClick(Sender);
	}
	else {
		this->SaveImage(ExtractFileExt(this->FilePath));
	}
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::FileSaveAsBtnClick(TObject *Sender)
{
	/* Save as */
	if (this->SavePictureDialog->Execute())
	{
		this->FilePath = this->SavePictureDialog->FileName;
		this->FileNameLbl->Caption = "Файл: " + ExtractFileName(this->FilePath);

		this->SaveImage(ExtractFileExt(this->FilePath));
	}
}
//---------------------------------------------------------------------------
void TGraphicEditor::SaveImage(AnsiString FileExt)
{
	TPngImage *PngImage = new TPngImage;
	TJPEGImage *JpegImage = new TJPEGImage;

	if (FileExt == ".jpg" || FileExt == ".jpeg") {
		JpegImage->Assign(this->PaintAreaImage->Picture->Bitmap);
		JpegImage->SaveToFile(this->FilePath);
	}
	else if (FileExt == ".png" || FileExt == ".PNG") {
		PngImage->Assign(this->PaintAreaImage->Picture->Bitmap);
		PngImage->SaveToFile(this->FilePath);
	}
	else {
		this->PaintAreaImage->Picture->SaveToFile(this->FilePath);
	}

	PngImage->Free();
	JpegImage->Free();
}
//---------------------------------------------------------------------------
TFontStyles TGraphicEditor::GetFontStyle()
{
	if (this->FontBoldRadioBtn->Checked) {
		return TFontStyles() << fsBold;
	}
	if (this->FontItalicRadioBtn->Checked) {
		return TFontStyles() << fsItalic;
	}
	if (this->FontUnderlineRadioBtn->Checked) {
		return TFontStyles() << fsUnderline;
	}
	if (this->FontStrikeOutRadioBtn->Checked) {
		return TFontStyles() << fsStrikeOut;
	}
}
//---------------------------------------------------------------------------
void __fastcall TGraphicEditor::ClearPaintAreaBtnClick(TObject *Sender)
{
	this->PaintAreaImage->Canvas->Brush->Color = clWhite;
	this->PaintAreaImage->Canvas->FillRect(this->PaintAreaImage->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

