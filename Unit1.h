//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Vcl.ColorGrd.hpp>
#include <System.Classes.hpp>
#include <Vcl.ActnPopup.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ButtonGroup.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TGraphicEditor : public TForm
{
__published:	// IDE-managed Components
	TPanel *MainPanel;
	TTrackBar *PenSizeTrackBar;
	TLabel *ColorNameLbl;
	TLabel *Label2;
	TLabel *Label3;
	TPanel *BrushPanel;
	TPanel *ToolsPanel;
	TLabel *Label4;
	TImage *RectImgBtn;
	TImage *CircleImgBtn;
	TImage *LineImgBtn;
	TLabel *ToolTypeLbl;
	TImage *EraserImgBtn;
	TImage *FillerImgBtn;
	TImage *RoundRectImgBtn;
	TImage *PencilImgBtn;
	TPanel *FilePanel;
	TLabel *Label5;
	TColorDialog *ColorDialog;
	TColorGrid *ColorGrid;
	TButton *DetailedColorSelectionBtn;
	TButtonGroup *ButtonGroup;
	TOpenPictureDialog *OpenPictureDialog;
	TSavePictureDialog *SavePictureDialog;
	TImage *PaintAreaImage;
	TButton *ClearPaintAreaBtn;
	TLabel *FileNameLbl;
	TImage *ColorDropperImgBtn;
	TImage *TextmgBtn;
	TPanel *TextFormatPanel;
	TLabel *Label1;
	TComboBox *FontSizeComboBox;
	TLabel *Label6;
	TLabel *Label7;
	TRadioButton *FontBoldRadioBtn;
	TRadioButton *FontItalicRadioBtn;
	TRadioButton *FontStrikeOutRadioBtn;
	TRadioButton *FontUnderlineRadioBtn;
	void __fastcall PaintAreaImageMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall PaintAreaImageMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PaintAreaImageMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall LineImgBtnClick(TObject *Sender);
	void __fastcall CircleImgBtnClick(TObject *Sender);
	void __fastcall RectImgBtnClick(TObject *Sender);
	void __fastcall PencilImgBtnClick(TObject *Sender);
	void __fastcall EraserImgBtnClick(TObject *Sender);
	void __fastcall FillerImgBtnClick(TObject *Sender);
	void __fastcall RoundRectImgBtnClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall DetailedColorSelectionBtnClick(TObject *Sender);
	void __fastcall ColorGridChange(TObject *Sender);
	void __fastcall FileOpenBtnClick(TObject *Sender);
	void __fastcall FileSaveBtnClick(TObject *Sender);
	void __fastcall PenSizeTrackBarChange(TObject *Sender);
	void __fastcall ClearPaintAreaBtnClick(TObject *Sender);
	void __fastcall FileSaveAsBtnClick(TObject *Sender);
	void __fastcall ColorDropperImgBtnClick(TObject *Sender);
	void __fastcall TextImgBtnClick(TObject *Sender);
private:
	bool MouseDown;
	bool MouseUp;
	int StartX, StartY;
	int DrawMode;
	TColor SelectedColor;
    AnsiString FilePath;

	void Draw(TCanvas *PaintAreaCanvas, int X, int Y);
	void SaveImage(AnsiString FileExt);
	TFontStyles GetFontStyle();
public:		// User declarations
	__fastcall TGraphicEditor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGraphicEditor *GraphicEditor;
//---------------------------------------------------------------------------
#endif
