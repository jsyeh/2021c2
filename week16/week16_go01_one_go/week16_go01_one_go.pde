//week16_go01_one_go week16_go 碁
void setup(){
  size(500,500);
}
int bx=0, by=0;//棋子的座標
void draw(){
  background(#FFFFF2);
  for(int y=50; y<500; y+=50){
    line( 0, y, 500, y );
  }
  for(int x=50; x<500; x+=50){
    line( x, 0, x ,500);
  }
  fill(0);//黑
  ellipse( bx, by, 40, 40 );
  ellipse(mouseX, mouseY, 40, 40);
}
void mousePressed(){
  bx=mouseX; by=mouseY;
}
