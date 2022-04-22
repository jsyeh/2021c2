///Week08-1.cpp step01-1 準備下次考試/複習上週教過
///趁著今天考完字串排序,帶大家把它做出來。先把資料都正確讀出來
#include <stdio.h>
char nation[2000][80]; //每筆80字母
   //國家名 2000筆
int main()
{
	int N;
	scanf("%d", &N);
	//技巧:知道有幾筆 for迴圈, 不知道有幾筆 while迴圈
	for(int i=0; i<N; i++){
		scanf("%s", nation[i] );//空格斷開

		char name[80];//人名,有空格在裡面
		gets( name );//技巧: gets()把空格也吃進來
	}


	for(int i=0; i<N; i++){
		printf("%s\n", nation[i] );
	}
}
