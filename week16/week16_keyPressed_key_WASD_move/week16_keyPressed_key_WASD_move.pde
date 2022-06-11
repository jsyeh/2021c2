//week16_keyPressed_key_WASD_move
void setup(){
  size(300,300);
}
int x=150, y=150; //座標
void draw(){
  background(#FFFFF2);
  ellipse(x, y, 30, 30);
}
void keyPressed(){
  if( key=='w' ) y -= 2;
  if( key=='s' ) y += 2;
  if( key=='a' ) x -= 2;
  if( key=='d' ) x += 2;
}
