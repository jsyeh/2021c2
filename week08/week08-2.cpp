///Week08-2.cpp step02-1 �ǳƤU���Ҹ�/�ƲߤW�g�йL
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
		scanf("%s", nation[i] );//�Ů��_�}
		char name[80];//�H�W,���Ů�b�̭�
		gets( name );//�ޥ�: gets()��Ů�]�Y�i��
	}

	qsort( nation, N, 80, compare );

	nation[N][0]=0;//�Ŧr��
	int combo = 1;//�զ⪺���@��
	for(int i=0; i<N; i++){
		//if( nation[i] == nation[i+1] ){//�ۦP, BUT�r�ꤣ���== �n��
		if( strcmp( nation[i], nation[i+1] ) == 0 ){
			combo++; //�h���@�ӬۦP��
		}else{
			printf("%s %d\n", nation[i], combo );
			combo = 1; //�s���}�l,����1��
		}
	}
}
