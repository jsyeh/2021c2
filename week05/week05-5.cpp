///Week05-5.cpp step03-2_���Ѫ��D�D  Hardwood species
///�N�𪺪��ئW�r���Ƨǲέp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40];//100�U����,�W�r30�r��,�}40��
int comp( const void *p1, const void *p2 ){
	char * tree1 = (char*) p1;
	char * tree2 = (char*) p2;
	return strcmp(tree1, tree2);
}
int main()
{
	int T;
	scanf("%d\n\n", &T); ///���K�B�z��2�Ӹ���

	///t:1 �����Y t:2 +���[ t:3 +���[ ....
	for(int t=1; t<=T; t++){ ///t�O�ĴX�����
		if(t>1) printf("\n");

		int N=0;//�X����
		while( gets( tree[N] ) ){
			if( tree[N][0]==0 ) break; ///Ū��ťզ�,��ܬO�U�@������
            N++;
		}

		qsort( tree, N, 40, comp );

		for(int i=0; i<N; i++){
			printf("%s \n", tree[i] );
		}
	}
}
