//Week07-5.cpp step03-1 Input ��a�W �W�r �r �r �r �r

#include <stdio.h>
char line[2000][80];
 //      2000�� 80�r��
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
