///Week09-4.cpp step02-3 �q���쩳
#include <stdio.h>
int grade[100];//�@�ʵ�
char name[100][30];
char tempName[30];
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
				int
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}
