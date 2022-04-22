///Week08-0.cpp step01-0 字串排序
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()

char line[100][80]; //最多100行,每行80字母

int compare( const void *p1, const void *p2 )
{
	     //strcmp( 字串1    , 字串2     );
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
	}

	qsort( line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}

}
