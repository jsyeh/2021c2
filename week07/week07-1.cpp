///Week07-1.cpp  step01-1 ���ѨM�r��ƧǪ� Input/Output
#include <stdio.h>
char line[1000][20];//�n���r��}�C �r��(�r���}�C 20�r��)
//       1000�� 20�r��  ����i �k��j
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){ //Input
		gets( line[i] );
	}


	for(int i=0; i<N; i++){ //Output
		printf("%s\n", line[i] );
	}

}
