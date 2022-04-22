///Week09-4.cpp step02-3 從高到底
#include <stdio.h>
int grade[100];//一百筆
char name[100][30];
char tempName[30];
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s %d", name[i], &grade[i] );
	}//Input
	for(int k=0; k<N-1; k++){//很多次
		for(int i=0; i<N-1; i++){//核心
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
