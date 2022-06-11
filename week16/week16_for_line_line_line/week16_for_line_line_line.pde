//week16_for_line_line_line
size(500,500);
background(#FFFFF2);
//line( 0, 50,  500, 50);
//line( 0,100,  500,100);
//line( 0,150,  500,150);
for(int y=50; y<500; y+=50){
  line( 0,  y,  500,  y);
}
//line( 50, 0,   50, 500);
//line(100, 0,  100, 500);
for(int x=50; x<500; x+=50){
  line(  x, 0,    x, 500);
}
