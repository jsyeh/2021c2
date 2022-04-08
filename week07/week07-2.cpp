///Week07-2.cpp  step01-2 qsort()
///最後我們把字串排序的程式寫完了,
///前面解決完 Input Output後,
///我們使用 qsort( line, N, 20, compare ) 好像很簡單,
///其實需要寫 int compare()函式, 裡面的 const void 指標 有點難懂,
///今天教完, 希望大家下週考試會熟悉。
///還有字串比較的 strcmp()也要熟悉
#include <stdio.h>
#include <stdlib.h> // qsort()
#include <string.h> // strcmp()
char line[1000][20];
int compare( const void *p1, const void *p2 )
{      //保護不能動    指標    //型別沒指定
	char * s1 = (char*) p1;
	char * s2 = (char*) p2;
	return strcmp( s1, s2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){ //Input
		gets( line[i] );
	}

	qsort( line, N, 20, compare  );

	for(int i=0; i<N; i++){ //Output
		printf("%s\n", line[i] );
	}

}
