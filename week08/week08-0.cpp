///Week08-0.cpp step01-0 �r��Ƨ�
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()

char line[100][80]; //�̦h100��,�C��80�r��

int compare( const void *p1, const void *p2 )
{
	     //strcmp( �r��1    , �r��2     );
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
