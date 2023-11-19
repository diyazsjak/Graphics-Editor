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
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPaintBox *PaintBox;
	TPanel *MainPanel;
	TTrackBar *BrushSizeTrackBar;
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
	void __fastcall PaintBoxMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall PaintBoxMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PaintBoxMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
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
	void __fastcall ButtonGroupItems0Click(TObject *Sender);
	void __fastcall ButtonGroupItems1Click(TObject *Sender);
	void __fastcall ButtonGroupItems2Click(TObject *Sender);
private:
	bool IsDrawing;
	int StartX, StartY;
	int DrawMode;
	const TColor PaintBoxDefaultColor = clBtnFace;
	TColor SelectedColor;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
