///Week05-4.cpp step03-1
///step03-1_今天的主題是要解 Hardwood species 將樹的物種名字做排序統計,其中我們先把資料讀進來。
#include <stdio.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n", &T); ///順便處理掉2個跳行

	///t:1 火車頭 t:2 +車廂 t:3 +車廂 ....
	for(int t=1; t<=T; t++){ ///t是第幾筆資料
		if(t>1) printf("\n");

		printf("現在讀到第%d大坨的資料\n", t);
		while( gets(line) ){
			if( line[0]==0 ) break; ///讀到空白行,表示是下一筆測資訊資
            ///第1個字母,剛好是字串的結尾, 就是空白行
		}
	}
}
