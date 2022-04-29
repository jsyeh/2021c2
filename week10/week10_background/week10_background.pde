//想做互動,要有2個函式
void setup(){//設定的函式
  size(300,300);
}
void draw(){//畫圖的函式, 60次/秒
  if(mousePressed) background(255,0,0);
  else background(0,255,0);
}
