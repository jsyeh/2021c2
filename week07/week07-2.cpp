///Week07-2.cpp  step01-2 qsort()
///�̫�ڭ̧�r��ƧǪ��{���g���F,
///�e���ѨM�� Input Output��,
///�ڭ̨ϥ� qsort( line, N, 20, compare ) �n����²��,
///���ݭn�g int compare()�禡, �̭��� const void ���� ���I����,
///���ѱЧ�, �Ʊ�j�a�U�g�Ҹշ|���x�C
///�٦��r������ strcmp()�]�n���x
#include <stdio.h>
#include <stdlib.h> // qsort()
#include <string.h> // strcmp()
char line[1000][20];
int compare( const void *p1, const void *p2 )
{      //�O�@�����    ����    //���O�S���w
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
