///Week07-7.cpp step03-3 �̫�έp
///�̫�ڭ̲έp�X�U�Ӱ�a�X�{������,
///�Q�ΰj��,��W�U2����� strcmp(line[i],line[i+1])==0�ݬO�_�ۦP
///�ۦP�Ncombo++,���ۦP�N�i�H�L�X line[i] ���Ӱ�a������ combo�ƶq�C
///�̭���2�Ӧa�����S�O,���O�O�j��]�줰��ɭԵ���,
///�ι����� line[N]���u��Lsentinal�v�b�W�L���a��е����Ŧr��
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2001][80];
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
		char others[80];
		gets(  others  );
	}

	qsort( line, N, 80, compare );

	line[N][0]=0;//�Ŧr��
	int combo=1;
	for(int i=0; i<N; i++){
		if( strcmp(line[i],line[i+1])==0 ){//�W�U2��
			combo++;//�ۦP
		}else{//���ۦP:�L����
			printf("%s %d\n", line[i], combo );
			combo=1;
		}
	}
}
