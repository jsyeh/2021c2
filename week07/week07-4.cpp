///Week07-4.cpp step02-2 Input
///�ڭ̼�������S���q�@�����@��, �k�ͰۥX�@��M�檺�έp, �쩳�D�H���w���Ǥk�͡C
///���D�N�O�Q�n���ӲM��,�̾ڰ�a�Ӳέp�C�Ĥ@�B����Input �� Output �d�w,
///�]�����ܦh�Ů�, �ҥH�ݭn gets()Ū�i�@���, Ū�� line[i] �̭�
#include <stdio.h>
char line[2000][80];
 //      2000�� 80�r��
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		gets(  line[i]  );
	}

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}

}
