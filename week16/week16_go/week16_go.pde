//week16_go 碁
//要如何把程式放上網? (0) Processing Java寫完程式
//(1) 把程式copy到 pde2js.herokuapp.com, 再轉換
//(2) 把轉換後的程式, copy 到 Processing p5.js裡
//(3) Run 它!! 127.0.0.1是你的電腦,家人朋友看不到
//(4) 把程式存檔! 桌面的 go 的 index.html 有問題
//(5) index.html 第9行 改成 go.js
//(6) 把 桌面的 go 目錄,放到 GitHub 你的網頁
//           你的帳號.github.io 
//    ex. maruneko030.github.io
//        maruneko030.github.io/go
void setup(){
  size(500,500);
}
int []bx=new int[100];//棋子的座標 陣列
int []by=new int[100];//棋子的座標 陣列
int N=0;//棋子的數字,一開始0個棋子
void draw(){
  background(#FFFFF2);
  for(int y=50; y<500; y+=50){
    line( 0, y, 500, y );
  }
  for(int x=50; x<500; x+=50){
    line( x, 0, x ,500);
  }
  for(int i=0; i<N; i++){
    if(i%2==0) fill(0);
    else fill(255);
    ellipse( bx[i], by[i], 40, 40 );
  }
  if(N%2==0) fill(0);
  else fill(255);
  ellipse(mouseX, mouseY, 40, 40);
}
void mousePressed(){
  bx[N]=mouseX; by[N]=mouseY;
  N++;
}
