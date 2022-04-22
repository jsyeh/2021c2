///Week09-0.cpp 考試 List of Conquests
#include <stdio.h>
#include <stdlib.h> //qsort() step3
#include <string.h> //strcmp() step5
char nation[2001][80];
int compare( const void*p1, const void *p2 )
{//Step4: compare函式
	return strcmp( (char*)p1, (char*)p2 );
}  //Step5: strcmp
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", nation[i] );

		char line[80];
		gets(line);
	}//Step1: Input

	qsort(nation,N,80, compare); //Step3: qsort()

	nation[N][0]=0;//空字串
	int combo = 1;//Step6
	for(int i=0; i<N; i++){//Step2: Output
		if( strcmp( nation[i], nation[i+1] ) == 0 ){ //相同
			combo++;
		}else{
			printf("%s %d\n", nation[i], combo );
			combo = 1;
		}
	}
}
