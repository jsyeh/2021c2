///Week01-1.cpp step01-1 �@�w�n .cpp �� �ҥ餵�Ѫ��Ҹ�,������ɮ�
///1. �b CodeBlocks �n�� input.txt �ǳƦn(�q�ƨg�{�]copy��)
///2. `FILE * fin = fopen("intput.txt", "r");`
///3. scanf() �令 fscanf(fin, )
#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt", "r" );
    int N;
  ///scanf("%d", &N);
    fscanf( fin, "%d", &N );
    for(int i=0; i<N; i++){
        fscanf(fin, "%s %d", name[i], &grade[i] );
    }


    for(int i=0; i<N; i++){
        printf("%s %d\n", name[i], grade[i] );
    }
}
