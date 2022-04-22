///Week09-5.cpp step03-1 從高到底
#include <stdio.h>
#include <string.h> //strlen() strcpy() strcmp()
int grade[100];//一百筆 整數
char name[100][30];//一百筆 字串(30個字元)
char tempName[30];//一筆 字串(30個字元)
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

				//口訣: int a = 10;
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
