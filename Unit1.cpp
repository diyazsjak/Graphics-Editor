//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cgrid"
#pragma link "cgrid"
#pragma link "cgrid"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormActivate(TObject *Sender)
{
	this->DrawMode = 3;  // pencil mode
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PaintBoxMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	this->PaintBox->Canvas->Pen->Width = this->BrushSizeTrackBar->Position;
	this->PaintBox->Canvas->Pen->Color = this->SelectedColor;
	this->PaintBox->Canvas->Brush->Style = bsClear;  // remove shape filling

	this->PaintBox->Canvas->MoveTo(X, Y);  // starting pos of pen

	this->StartX = X;
	this->StartY = Y;
	this->IsDrawing = true;

	// filler
	if (this->DrawMode == 5)
	{
		// get color of pixel at mouse pos
		TColor ColorToFill = this->PaintBox->Canvas->Pixels[X][Y];

		// Brush is for filling figures
		this->PaintBox->Canvas->Brush->Color = this->SelectedColor;
		// fill shape of FillColor until different color's boundary
		this->PaintBox->Canvas->FloodFill(X, Y, ColorToFill, fsSurface);

        this->IsDrawing = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PaintBoxMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	if (!this->IsDrawing) {
		return;
	}

	switch (this->DrawMode)
	{
		case 3:
			// pencil
			this->PaintBox->Canvas->LineTo(X, Y);
			this->StartX = X;
			this->StartY = Y;
			break;

		case 4:
            // eraser
			this->PaintBox->Canvas->Pen->Color = this->PaintBoxDefaultColor;
			this->PaintBox->Canvas->LineTo(X, Y);
			this->StartX = X;
			this->StartY = Y;
			this->PaintBox->Canvas->Pen->Color = this->SelectedColor;
			break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PaintBoxMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	switch (this->DrawMode)
	{
		case 0:
			// line
            this->PaintBox->Canvas->LineTo(X, Y);
			break;

		case 1:
			// ellipse
			this->PaintBox->Canvas->Ellipse(this->StartX, this->StartY, X, Y);
			break;

		case 2:
			// rect
			this->PaintBox->Canvas->Rectangle(this->StartX, this->StartY, X, Y);
			break;

		case 6:
			// round rect
			this->PaintBox->Canvas->RoundRect(this->StartX, this->StartY, X, Y, 30, 30);
			break;
	}

    this->IsDrawing = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LineImgBtnClick(TObject *Sender)
{
	this->DrawMode = 0;
	this->ToolTypeLbl->Caption = "Инструмент: Прямая";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CircleImgBtnClick(TObject *Sender)
{
	this->DrawMode = 1;
	this->ToolTypeLbl->Caption = "Инструмент: Эллипс";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RectImgBtnClick(TObject *Sender)
{
	this->DrawMode = 2;
	this->ToolTypeLbl->Caption = "Инструмент: Прямоугольник";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PencilImgBtnClick(TObject *Sender)
{
	this->DrawMode = 3;
	this->ToolTypeLbl->Caption = "Инструмент: Карандаш";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EraserImgBtnClick(TObject *Sender)
{
	this->DrawMode = 4;
	this->ToolTypeLbl->Caption = "Инструмент: Ластик";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FillerImgBtnClick(TObject *Sender)
{
	this->DrawMode = 5;
	this->ToolTypeLbl->Caption = "Инструмент: Заливка";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRectImgBtnClick(TObject *Sender)
{
	this->DrawMode = 6;
	this->ToolTypeLbl->Caption = "Инструмент: Округленный прямоугольник";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DetailedColorSelectionBtnClick(TObject *Sender)
{
	if (this->ColorDialog->Execute()) {
		this->SelectedColor = this->ColorDialog->Color;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ColorGridChange(TObject *Sender)
{
	this->SelectedColor = this->ColorGrid->ForegroundColor;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonGroupItems0Click(TObject *Sender)
{
	/* Open image file*/
	if (this->OpenPictureDialog->Execute())
	{
		if (FileExists(this->OpenPictureDialog->FileName))
		{
			Graphics::TBitmap *Picture = new Graphics::TBitmap;

			Picture->LoadFromFile(this->OpenPictureDialog->FileName);
			this->PaintBox->Canvas->Draw(0, 0, Picture);

            delete Picture;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonGroupItems1Click(TObject *Sender)
{
	/* Save image file*/
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonGroupItems2Click(TObject *Sender)
{
	/* Save as... image file*/
}
//---------------------------------------------------------------------------

