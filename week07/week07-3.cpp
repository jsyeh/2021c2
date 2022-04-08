///Week07-3.cpp step02-1 重寫 字串排序
///老師在第2節課問同學剛剛「字串排序」程式碼裡面的意思,不過許多同學可能剛接觸、不熟,
///所以老師又重新講解並示範了另外一種寫法
#include <stdio.h>
#include <stdlib.h> // qsort()
#include <string.h> // strcmp()
char line[1000][20];
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}

int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
	}

	qsort( line, N, 20, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}
}

