//Week07-5.cpp step03-1 Input 國家名 名字 字 字 字 字

#include <stdio.h>
char line[2000][80];
 //      2000行 80字母
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
	//scanf() vs. gets()
		scanf("%s", line[i] );
		char others[80];
		gets(  others  );
	}

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}
}
