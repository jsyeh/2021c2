///Week05-3.cpp step02-2 ��֤@�I
#include <stdio.h>
#include <stdlib.h> ///qsort()
int comp( const void *p1, const void *p2 ) ///����Ϊ��禡 comp()
{
    int a = *(int*)p1,  b = *(int*)p2;
    if( a>b ) return +1; ///�T�ت��p
    if( a<b ) return -1; ///�f�Z: ��k a-b
    if( a==b )return 0;
}
int main()
{
    int a[100];///�����ýX
    for(int i=0; i<100; i++) printf("%d ", a[i] );
    printf("\n");///���ݬݤ��e�ܶî@

    qsort( a, 100, sizeof(int), comp );

    for(int i=0; i<100; i++) printf("%d ", a[i] );
    printf("\n");///�Ƨ�����, �ˬd�@�U
    return 0;
}

/*
Q:�p�G�� 10�U�ӼƦr�n�⤤, 10�U*10�U=100��
    for(int k=0; k<100000-1; k++){///10�U
        for(int i=0; i<100000-1; i++){///10�U
*/
