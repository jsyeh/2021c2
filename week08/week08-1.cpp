///Week08-1.cpp step01-1 �ǳƤU���Ҹ�/�ƲߤW�g�йL
///�X�ۤ��Ѧҧ��r��Ƨ�,�a�j�a�⥦���X�ӡC�����Ƴ����TŪ�X��
#include <stdio.h>
char nation[2000][80]; //�C��80�r��
   //��a�W 2000��
int main()
{
	int N;
	scanf("%d", &N);
	//�ޥ�:���D���X�� for�j��, �����D���X�� while�j��
	for(int i=0; i<N; i++){
		scanf("%s", nation[i] );//�Ů��_�}

		char name[80];//�H�W,���Ů�b�̭�
		gets( name );//�ޥ�: gets()��Ů�]�Y�i��
	}


	for(int i=0; i<N; i++){
		printf("%s\n", nation[i] );
	}
}
