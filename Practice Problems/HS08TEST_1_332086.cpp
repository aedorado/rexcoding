program test;

var
   wdr:integer;
   acc:real;
   lst:real;
begin

read(wdr); read(acc);

if (wdr+0.5)<acc then
   if (wdr mod 5 = 0) then
      begin
         lst:=acc-wdr-0.5;
         write(lst);
      end
   else
      write(acc)
else
write(acc);

end.