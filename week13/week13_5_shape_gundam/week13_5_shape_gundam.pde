//Week13_5_shape_gundam step03-1
PShape gundam;//等一下要用的鋼彈模型
void setup(){  //P語言其實是Java的變型(方言)
  size(500, 500, P3D); //有P語言的3D功能
  gundam = loadShape("Gundam.obj");
}       //讀入模型,很像今天教的loadImage()
void draw(){//每秒60次畫圖
  background(#F8FFAF);
  //但是這個模型太小了, 等一下要把它放!!
  translate( 250, 0, 0);//往右移一半
  scale(20, 20, 20);//放大20倍,看起來倒過來
  //因為建3D模型時,Y軸向上, 小畫家/P語言/圖片,Y向下
  shape(gundam); //秀出模型,像今天教的image()
}//Q: 模型 Gundam.obj 在哪裡?
