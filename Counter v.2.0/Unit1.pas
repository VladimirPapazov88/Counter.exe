Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    lbl: TextBox;
    button1: Button;
    button2: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  var
    znach, err: integer;
  val(lbl.Text, znach, err);
  znach-=1;
  var lbltext := lbl.Text;
  str(znach, lbltext);
  lbl.Text:=lbltext;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  var
    err, znach: integer;
  val(lbl.Text, znach, err);
  znach+=1;
  var lbltext := lbl.Text;
  str(znach, lbltext);
  lbl.Text:=lbltext;
end;

end.
