///Week09-5.cpp step03-1 �q���쩳
#include <stdio.h>
#include <string.h> //strlen() strcpy() strcmp()
int grade[100];//�@�ʵ� ���
char name[100][30];//�@�ʵ� �r��(30�Ӧr��)
char tempName[30];//�@�� �r��(30�Ӧr��)
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s %d", name[i], &grade[i] );
	}//Input
	for(int k=0; k<N-1; k++){//�ܦh��
		for(int i=0; i<N-1; i++){//�֤�
			if( grade[i] < grade[i+1] ){
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;

				//�f�Z: int a = 10;
				//       a = b;
				//strcpy(a, b);
				strcpy( tempName, name[i] );
				strcpy( name[i], name[i+1] );
				strcpy( name[i+1], tempName );
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}