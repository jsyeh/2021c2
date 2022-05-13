//Step02-2 Week12_3_mouse
//Ctrl-N可開新的程式, Ctrl-S 可存檔
void setup(){//要互動,要有2個函式: setup()設定
  size(300,300);                  //設定,只做一次
  textSize(40); //文字的大小, 40號字
}
void draw(){////要互動,要有2個函式: draw()畫
              //每秒會畫60次
  background(#DFEA45); //背景色
  fill(#456FEA); //字的填充的顏色
  text("Hello", mouseX,mouseY); //秀文字,在滑鼠位置
} //你的mouse移動時,mouseX座標 mouseY座標 用來放字
