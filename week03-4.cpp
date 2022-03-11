//Week03-4.cpp
//Q:如何印出中間的 "\n"
#include <stdio.h>

char line[2000];
int main()
{
	int t=1;//技巧1: 一開始是火車頭,不用掛勾

	//while( scanf("%s",line)==1 ){//不定長度,用while
	while( gets(line) ){ //技巧2: gets()可讀一整行

		if(t>1) printf("\n");///技巧1: 後面車廂有掛勾

		printf("車廂%d讀到一筆資料哦\n", t);

		t++;//技巧1: 火車車廂的想法
	}
	return 0;
}
