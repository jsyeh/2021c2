///Week08-2.cpp step02-1 準備下次考試/複習上週教過
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char nation[2001][80];
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", nation[i] );//空格斷開
		char name[80];//人名,有空格在裡面
		gets( name );//技巧: gets()把空格也吃進來
	}

	qsort( nation, N, 80, compare );

	nation[N][0]=0;//空字串
	int combo = 1;//白色的那一筆
	for(int i=0; i<N; i++){
		//if( nation[i] == nation[i+1] ){//相同, BUT字串不能用== 要改
		if( strcmp( nation[i], nation[i+1] ) == 0 ){
			combo++; //多找到一個相同的
		}else{
			printf("%s %d\n", nation[i], combo );
			combo = 1; //新的開始,有第1筆
		}
	}
}
