///Week04-0.cpp step01-0 今天考試題目
///簡化版,只解決 Input/Output
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");
		printf("Test Case %d\n", t);

		t++;
	}
	return 0;
}
