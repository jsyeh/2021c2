///Week07-3.cpp step02-1 ���g �r��Ƨ�
///�Ѯv�b��2�`�ҰݦP�ǭ��u�r��Ƨǡv�{���X�̭����N��,���L�\�h�P�ǥi��豵Ĳ�B����,
///�ҥH�Ѯv�S���s���Ѩåܽd�F�t�~�@�ؼg�k
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

