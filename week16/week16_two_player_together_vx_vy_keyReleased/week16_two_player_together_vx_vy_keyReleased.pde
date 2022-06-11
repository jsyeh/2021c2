//week16_two_player_together_vx_vy_keyReleased
void setup(){
  size(400,300);
}
int x=100, y=150, x2=300, y2=150; //座標
int vx=0, vy=0, vx2=0, vy2=0; //移動速度
void draw(){
  background(#FFFFF2);
  ellipse(x, y, 30, 30);
  ellipse(x2, y2, 30, 30);
  x += vx;  y += vy; //更新位置
  x2+= vx2; y2+= vy2; //更新位置
}
void keyPressed(){//按鍵,一次只能一個人
  if( key=='w' ) vy = -2; //y -= 2;
  if( key=='s' ) vy = +2; //y += 2;
  if( key=='a' ) vx = -2; //x -= 2;
  if( key=='d' ) vx = +2; //x += 2;
  if( keyCode==UP )  vy2 = -2; //y2 -= 2;
  if( keyCode==DOWN) vy2 = +2; //y2 += 2;
  if( keyCode==LEFT) vx2 = -2; //x2 -= 2;
  if( keyCode==RIGHT)vx2 = +2; //x2 += 2;
}
void keyReleased(){//按鍵放開時,速度變0
  if( key=='w' ) vy = 0;
  if( key=='s' ) vy = 0;
  if( key=='a' ) vx = 0;
  if( key=='d' ) vx = 0;
  if( keyCode==UP )  vy2 = 0;
  if( keyCode==DOWN) vy2 = 0;
  if( keyCode==LEFT) vx2 = 0;
  if( keyCode==RIGHT)vx2 = 0;
}
