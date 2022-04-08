///Week07-1.cpp  step01-1 先解決字串排序的 Input/Output
#include <stdio.h>
char line[1000][20];//要有字串陣列 字串(字元陣列 20字母)
//       1000行 20字母  左手i 右手j
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){ //Input
		gets( line[i] );
	}


	for(int i=0; i<N; i++){ //Output
		printf("%s\n", line[i] );
	}

}
