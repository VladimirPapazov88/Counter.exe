uses FormsABC;

var
  lbl := new TextLabel('0');
  br := new FlowBreak;
  btnplus := new Button('+');
  btnminus := new Button('-');
  
procedure minus;
var
  znach, err: longint;
begin
  val(lbl.Text, znach, err);
  znach-=1;
  var lbltext := lbl.Text;
  str(znach, lbltext);
  lbl.Text:=lbltext;
end;
procedure plus;
var
  znach, err: longint;
begin
  val(lbl.Text, znach, err);
  znach+=1;
  var lbltext := lbl.Text;
  str(znach, lbltext);
  lbl.Text:=lbltext;
end;
begin
  MainForm.Title:='Counter.exe';
  MainForm.Height:=108;
  MainForm.Width:=280;
  btnminus.Click += minus;
  btnplus.Click += plus;
end.