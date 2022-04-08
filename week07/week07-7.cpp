//Week07-7.cpp step03-3 完成數數
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2000][80];
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

	line[N][0]=0;//空字串
	int combo=1;
	for(int i=0; i<N; i++){
		if( strcmp(line[i],line[i+1])==0 ){//上下2行
			combo++;//相同
		}else{//不相同:印答案
			printf("%s %d\n", line[i], combo );
			combo=1;
		}
	}
}
