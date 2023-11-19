object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1043#1088#1072#1092#1080#1095#1077#1089#1082#1080#1081' '#1088#1077#1076#1072#1082#1090#1086#1088
  ClientHeight = 686
  ClientWidth = 984
  Color = clBtnFace
  Constraints.MaxHeight = 1200
  Constraints.MaxWidth = 1800
  Constraints.MinHeight = 700
  Constraints.MinWidth = 1000
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  FormStyle = fsStayOnTop
  OnActivate = FormActivate
  TextHeight = 15
  object PaintBox: TPaintBox
    Left = 185
    Top = 0
    Width = 799
    Height = 686
    Cursor = crCross
    Margins.Left = 0
    Margins.Top = 0
    Margins.Bottom = 0
    Align = alClient
    Color = clBtnFace
    ParentColor = False
    OnMouseDown = PaintBoxMouseDown
    OnMouseMove = PaintBoxMouseMove
    OnMouseUp = PaintBoxMouseUp
    ExplicitLeft = 188
    ExplicitTop = 5
  end
  object MainPanel: TPanel
    Left = 0
    Top = 0
    Width = 185
    Height = 686
    Margins.Left = 0
    Margins.Top = 0
    Margins.Bottom = 0
    Align = alLeft
    BevelInner = bvRaised
    BevelKind = bkTile
    BevelOuter = bvLowered
    BorderWidth = 1
    Color = clSeashell
    ParentBackground = False
    TabOrder = 0
    ExplicitLeft = -24
    ExplicitTop = 5
    ExplicitHeight = 661
    object ToolTypeLbl: TLabel
      Left = 3
      Top = 3
      Width = 175
      Height = 17
      Align = alTop
      Alignment = taCenter
      Caption = #1048#1085#1089#1090#1088#1091#1084#1077#1085#1090': '#1050#1072#1088#1072#1085#1076#1072#1096
      FocusControl = ToolsPanel
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      Transparent = True
      WordWrap = True
      ExplicitWidth = 139
    end
    object BrushPanel: TPanel
      Left = 3
      Top = 148
      Width = 175
      Height = 265
      Align = alTop
      BevelOuter = bvLowered
      BorderWidth = 1
      TabOrder = 0
      ExplicitLeft = 5
      ExplicitTop = 173
      object ColorNameLbl: TLabel
        Left = 8
        Top = 27
        Width = 47
        Height = 23
        Margins.Left = 0
        Caption = #1062#1074#1077#1090': '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -17
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
      end
      object Label2: TLabel
        Left = 8
        Top = 193
        Width = 62
        Height = 23
        Caption = #1056#1072#1079#1084#1077#1088':'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -17
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
      end
      object Label3: TLabel
        Left = 68
        Top = 6
        Width = 39
        Height = 15
        Alignment = taCenter
        Caption = #1054#1073#1097#1077#1077
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
      end
      object BrushSizeTrackBar: TTrackBar
        Left = 0
        Top = 222
        Width = 177
        Height = 25
        Max = 20
        Min = 1
        Position = 1
        PositionToolTip = ptBottom
        TabOrder = 0
        TickMarks = tmBoth
        TickStyle = tsNone
      end
      object ColorGrid: TColorGrid
        Left = 8
        Top = 56
        Width = 156
        Height = 92
        BackgroundEnabled = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        Font.Quality = fqProof
        ParentFont = False
        TabOrder = 1
        OnChange = ColorGridChange
      end
      object DetailedColorSelectionBtn: TButton
        Left = 8
        Top = 154
        Width = 156
        Height = 25
        Hint = #1041#1086#1083#1077#1077' '#1090#1086#1095#1085#1099#1081' '#1074#1099#1073#1086#1088' '#1094#1074#1077#1090#1072
        Cancel = True
        Caption = #1044#1077#1090#1072#1083#1100#1085#1099#1081' '#1074#1099#1073#1086#1088
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        TabOrder = 2
        OnClick = DetailedColorSelectionBtnClick
      end
    end
    object ToolsPanel: TPanel
      Left = 3
      Top = 413
      Width = 175
      Height = 154
      Hint = #1054#1082#1088#1091#1075#1083#1077#1085#1085#1099#1081' '#1087#1088#1103#1084#1086#1091#1075#1086#1083#1100#1085#1080#1082
      Margins.Left = 0
      Align = alTop
      BevelOuter = bvLowered
      BorderWidth = 1
      ParentShowHint = False
      ShowHint = True
      TabOrder = 1
      ExplicitLeft = 5
      ExplicitTop = 401
      object Label4: TLabel
        Left = 49
        Top = 6
        Width = 76
        Height = 15
        Alignment = taCenter
        Caption = #1048#1085#1089#1090#1088#1091#1084#1077#1085#1090#1099
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
      end
      object RectImgBtn: TImage
        Left = 115
        Top = 31
        Width = 41
        Height = 33
        Cursor = crHandPoint
        Hint = #1055#1088#1103#1084#1086#1091#1075#1086#1083#1100#1085#1080#1082
        Center = True
        ParentShowHint = False
        Picture.Data = {
          0954506E67496D61676589504E470D0A1A0A0000000D494844520000001E0000
          001E08060000003B30AEA2000000097048597300000B1300000B1301009A9C18
          000000914944415478DA63641820C038A22D560062151ADB7707881F205BCC0F
          C42F81989DC616FF066209207E07B318E4DBFB40FC1C8837D3C8525F20960462
          4590AFD12D3E00C48E34B2783F103B8C5A3C6AF1A8C5A3168F5A3C6AF1A8C504
          2DBE07C4B36864711A102BA15B2CCC0069FA30D3C85218F8C30069FABC456EEC
          3931D0BEB1770D888F801883A2793B6AF1F0B418006E7C521F0AA9FD8B000000
          0049454E44AE426082}
        ShowHint = True
        Touch.ParentTabletOptions = False
        Touch.TabletOptions = [toPressAndHold]
        OnClick = RectImgBtnClick
      end
      object CircleImgBtn: TImage
        Left = 68
        Top = 32
        Width = 41
        Height = 33
        Cursor = crHandPoint
        Hint = #1069#1083#1083#1080#1087#1089
        Center = True
        ParentShowHint = False
        Picture.Data = {
          0954506E67496D61676589504E470D0A1A0A0000000D494844520000001E0000
          001E08060000003B30AEA2000000097048597300000B1300000B1301009A9C18
          0000025B4944415478DAD5974B6C8C511480CF54178A44425176080BE2B51061
          C992742D6805894782055D10AF20586825C4231309D521625BB6969A4A85A061
          512CBD090B6A81F84ECEF96372F3FF33F3776ED2F424DF667AE77EF79CDE73EF
          9D828C5214C68AB81196C31C98EE9F7D84373000BF638B97C03E58075332C67C
          817BD005CFEB1537FB449BA00186E13E3C850F3E66862F6C0D34C15F28C17E5F
          4C6EF142E8F5B2BE85E370137E668C9F006D701466C16B68851779C42A7D0093
          A107765510A62DA0E855FA0EABD2E469622DEF43CFF4041CAB5118867EF78867
          BE4282B2A7897BBC64FA7F6A1FA134899267DE0D5B2A8975933C86F7302F4779
          B362220C89B5DE3229DBEDA1F88667B91DAED6294D62275C09B32E17377AA6BA
          39A6C18F48629DEF93582BB6881F32E562DD7DBA93EF8AB541CCD083652DAC84
          FE50BC51AC4F4FC1E1C8E2D3701036C0ED50DC016761375C8A2CDE0317DCD115
          8AF588EBF44117238BF7C279779C0BC55A865B5E964391C567E000AC873BA178
          D436D738B176D2A68FD94E93C4DA49E74B6D278D6ED82CD6F4C54862BD602EC3
          75D89A7C188A17C313CF7C7E84AC35DB21AFE05218CC129767AD3DDD5687B4E0
          73E8A6BD06DBC23F863155EC5A9C0B27C52EF69148F5BBDA1DAFC4AEC5AFD5C4
          1A0BA04FEC21A02DB6436A2FBB96B7E8997E13EB9697692BCB0A95F77AE6EFC4
          2EF65285056837B47B855A3CD3D63469357152F64E9F501F7BBFC41E7BCF7C31
          1A33C5EEF1D5301EFE883D263AC2F2E61127B148FE3F6F9B33C67C163B7CF448
          1CAC3661DE07BD1E32FAA09FEDE5D4D0D6D307FD23CFB6A618333F61A2C53FA0
          4E801F067B19340000000049454E44AE426082}
        ShowHint = True
        OnClick = CircleImgBtnClick
      end
      object LineImgBtn: TImage
        Left = 21
        Top = 32
        Width = 41
        Height = 32
        Cursor = crHandPoint
        Hint = #1055#1088#1103#1084#1072#1103
        Center = True
        ParentShowHint = False
        Picture.Data = {
          0954506E67496D61676589504E470D0A1A0A0000000D494844520000001E0000
          001E08060000003B30AEA2000000097048597300000B1300000B1301009A9C18
          000000384944415478DAEDCD310D00200C0041AA04A1CC08C5093540D8DAE53E
          F9F96234156030180C06FFE095CF22F3E4BB1D2E0F0C0683C1E06717E66B041F
          B2D6D1B00000000049454E44AE426082}
        ShowHint = True
        OnClick = LineImgBtnClick
      end
      object EraserImgBtn: TImage
        Left = 68
        Top = 109
        Width = 41
        Height = 33
        Cursor = crHandPoint
        Hint = #1051#1072#1089#1090#1080#1082
        Center = True
        ParentShowHint = False
        Picture.Data = {
          0954506E67496D61676589504E470D0A1A0A0000000D494844520000001E0000
          001E08060000003B30AEA2000000097048597300000B1300000B1301009A9C18
          000002464944415478DAC596CD4B545114C0EFD0078141D3876885BB3E080A82
          16126D941C30C885588B0A025B14452D22A8BFA05520A42428E642887221D222
          12276236450441816E525A48518145F4418545FD0EF70CDC79BDAFFBDE54077E
          3CDEDC79EF37E7DC73EF9D82F94F51A8D37B96C11678014BFF4ABC1EEE402BCC
          4227BCFCDB6291DE832F300A8735F3F624791EB12B3D00C37041AFDB93E459C5
          AEF4164CC13CAC86F3C6963D569E451CCCB41B1E3AE23370152654DE06AFF28A
          83997E84311D93FBB3B0A8191F821DB04D33AF91FB88839936E9E7F37AED800A
          FC8075C636D933CDFC0F795AB12BED33B67B8F38998EE8F84628C34E1DBB042B
          B50235F234E2AA74379C3276D914E13BFC8255F0011AE135346BB9D7C2577DC7
          1AB80E9B600F2C2589DD4C652E07E004DC808B2ABEA2DF9D81FDF0164AD00B47
          75EC264CEB8F96CCE70A29A532A79FE0983E5C951B2DE31CBC87E55ACEB28E6D
          D5EB1BB80B2B609FF441C1435A8DA0FC32DC86C7B001FA9D4C8F1BBBC4E4BEC1
          D8067C1735C771D228B98434D235F8AC99EE8549CDB4461A264E238D92CB9C0F
          3AE25258A661621F6994BC514B7D322AD3A0589AE281B167695A69987C1CBA8C
          3D2C22A5AE584AF31C5A4C8AB334467ECED8868A95BA6269F327B0003DC66E0E
          BE21E51D82A74952572C217BEF7D95CB89F3CD432A19CABF90A24A17931E0876
          7516B9B7344CEC2BCF248D12A7956796C68993E4B9A449E228796E691AB1849C
          A11563D7F969638FB8C4755A0F71552EFF2477C123389847EA2396906D75B3B1
          3BDBCF3C525F715DE33722CDB21F04F5CCEA0000000049454E44AE426082}
        ShowHint = True
        OnClick = EraserImgBtnClick
      end
      object FillerImgBtn: TImage
        Left = 115
        Top = 70
        Width = 41
        Height = 33
        Cursor = crHandPoint
        Hint = #1047#1072#1083#1080#1074#1082#1072
        Center = True
        ParentShowHint = False
        Picture.Data = {
          0954506E67496D61676589504E470D0A1A0A0000000D49484452000000280000
          002808060000008CFEB86D000000097048597300000B1300000B1301009A9C18
          000002174944415478DAED974F2804511CC7DF22A4644B1C1CB4E4E2E0C64D8A
          2807921C89928394E4406E56296D2207B9B828274AC481A4E4CF99134736A194
          DCFC3938F8FE7A6FDA6D9BF766DE9B193387FDD6A79D99B7539FF9FDF6BD371B
          63114F2C6C81BC605405BB4133588CA260273802A5600124A326580BCE41BD38
          4F81B92809FEABA4A920B597DADC99752D90769B0892DC3EE31385F20B8A8292
          D4152C067BA0479C9F824970CC026AB78EA09D5C1FF86101FE26DD0AAAE4AC04
          22E946D08D5C60924E823A728148AA044DE47C97940996800396594A4E40BF4B
          392B09219910E7464B904C70154C7B90F34D3226B9F601E2E01A7419CAF92269
          275809DEC5312DC2EB1EE4B2256FC54353A83B6BA6829437500DEE401BE315F5
          92249817C769D02E3E8D0569C62D89E31BC6DB6C2A692CA7122C009B60549C53
          7B760CE41AC098A99C4AD01ADB00E32665CBC993907BD0BDD16927C9ADA449D2
          CCBE72556018AC7811F42A2993A3EC8201D0012EBC085ADFD36DB7AAADBDE050
          1C3F8226F0E94590A2534955E52AC03DA8C9BA26DDAB75DFA8DD54D269422459
          66D9B1423B15CDF817AF821455255595A3948B0788DB8C2D83593F042D49DA53
          67187FF3A15C8241F0ACB86F086C4BC6E8A1EAFC12B442FFF01AC12BE3DBA353
          A84229C9D83728F35B5037ADE04A3276C6F8961AAA20650B8CE45CFB022D8CCF
          EED0050B19FFED4E30BE9BD03BE7949D5C58825AC90BE605C3CE1F4576802996
          0F94ED0000000049454E44AE426082}
        ShowHint = True
        Touch.ParentTabletOptions = False
        Touch.TabletOptions = [toPressAndHold]
        OnClick = FillerImgBtnClick
      end
      object RoundRectImgBtn: TImage
        Left = 21
        Top = 70
        Width = 41
        Height = 33
        Cursor = crHandPoint
        Hint = #1054#1082#1088#1091#1075#1083#1077#1085#1085#1099#1081' '#1087#1088#1103#1084#1086#1091#1075#1086#1083#1100#1085#1080#1082
        Center = True
        ParentShowHint = False
        Picture.Data = {
          0954506E67496D61676589504E470D0A1A0A0000000D49484452000000200000
          00200806000000737A7AF4000000097048597300000B1300000B1301009A9C18
          000000FB4944415478DAED96BB0E01511086671B8D4B94C27B5013155EC143D0
          90C8922041C14BF0066E150FE03984DAA5D2F04F768BCDCAB19273D82D6692AF
          39D9CC7C7372927F2D0AB92C111081A80AD4400314405C73C61D1CC00CACBF11
          1882CE8F161E80EE2701DE7C091EC0060B70D21C9A0575D0073150051B95C01E
          14411B4C0C6FDF0263B0036595C00D245CEBB361818CDB9367A454024FC5B9A9
          7AEB2F02222002221039812B48821CE98790BFB8E7115C405A25C04151A2DF84
          11F71C5140187154AEC88963CEEDB9819BF0C771056C5502E47E681BDEDEDBBB
          E73D503D36B66C823C396F42A7387EF9976CEADD3C48E06F25022210BAC00B7B
          843C213C3962900000000049454E44AE426082}
        ShowHint = True
        OnClick = RoundRectImgBtnClick
      end
      object PencilImgBtn: TImage
        Left = 68
        Top = 70
        Width = 41
        Height = 33
        Cursor = crHandPoint
        Hint = #1050#1072#1088#1072#1085#1076#1072#1096
        Center = True
        ParentShowHint = False
        Picture.Data = {
          0954506E67496D61676589504E470D0A1A0A0000000D494844520000001E0000
          001E08060000003B30AEA2000000097048597300000B1300000B1301009A9C18
          000001A44944415478DAC5D7CB2B44511CC0F13344FE034A69268F128A6C6CD4
          8CD71E1B25AFAD9DF81B2C65A12C144AEC14D9D820B1B091E455F22AE5B5B1B0
          60E1F53D9DDFADDB9D3BE671CF1DA73E3533B77BBF9DFB9E88FAA711C943A318
          0D78C4433EC27ADB8D5841957C9FC07498E142CC6310EBE843423E97E2358CB0
          8E2E4868179D68C7335E64F6D7B6C34EB40D711DC02CBA718E22B4E2C766D889
          F6E2031D3852E6702EA11F31DC2965EF183BD1B8CC764C99E3AAE36FD8C13686
          9C156C84DDD184EC5EBDDD1989EBD96F61045FB6C2EE13292E5167E893E818AB
          DE68D0B073C9B449F8CAB52C2ABBF70003F8F4AE9C6B385034D770E0682E612B
          D16CC3D6A2D9849D6897842F5CCBAA95B946F7338D661A4E17D533DDCB269A49
          389468BA7068D1BFC2A1465385438FFA850BB0A8CC835B5F32973E517D0627DD
          7B83867B94B9A94F2AF3AE7426BFD748D04AD42FBC8172D4A20475B23BF54C93
          1E6DB6C265B8470B0EF18E290CDB8E7AC3E31845259A318726655E5BAC46BDE1
          13D4E30615D854E621BF866F9B5177388A5B9C2A73562FE3C9762CD58C6312CF
          CBC8C77F27DFF10B803F821FA8A892E50000000049454E44AE426082}
        ShowHint = True
        OnClick = PencilImgBtnClick
      end
    end
    object FilePanel: TPanel
      Left = 3
      Top = 20
      Width = 175
      Height = 128
      Align = alTop
      BevelOuter = bvLowered
      TabOrder = 2
      ExplicitTop = 289
      object Label5: TLabel
        Left = 49
        Top = 6
        Width = 76
        Height = 15
        Alignment = taCenter
        Caption = #1048#1079#1086#1073#1088#1072#1078#1077#1085#1080#1077
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
      end
      object ButtonGroup: TButtonGroup
        Left = 1
        Top = 28
        Width = 173
        Height = 99
        Cursor = crHandPoint
        Align = alBottom
        BevelInner = bvNone
        BevelOuter = bvNone
        BorderStyle = bsNone
        ButtonHeight = 33
        ButtonWidth = 200
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -17
        Font.Name = 'Segoe UI'
        Font.Style = []
        Items = <
          item
            Caption = #1054#1090#1082#1088#1099#1090#1100
            Hint = 'CTRL + O'
            OnClick = ButtonGroupItems0Click
          end
          item
            Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
            Hint = 'CTRL + S'
            OnClick = ButtonGroupItems1Click
          end
          item
            Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1082#1072#1082
            OnClick = ButtonGroupItems2Click
          end>
        ShowHint = True
        TabOrder = 0
        ExplicitLeft = 4
        ExplicitTop = 6
      end
    end
  end
  object ColorDialog: TColorDialog
    Options = [cdPreventFullOpen]
    Left = 440
    Top = 8
  end
  object OpenPictureDialog: TOpenPictureDialog
    Left = 232
    Top = 8
  end
  object SavePictureDialog: TSavePictureDialog
    Left = 344
    Top = 8
  end
end
