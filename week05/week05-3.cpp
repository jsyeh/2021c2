///Week05-3.cpp step02-2 更快一點
#include <stdio.h>
#include <stdlib.h> ///qsort()
int comp( const void *p1, const void *p2 ) ///比較用的函式 comp()
{
    int a = *(int*)p1,  b = *(int*)p2;
    if( a>b ) return +1; ///三種狀況
    if( a<b ) return -1; ///口訣: 減法 a-b
    if( a==b )return 0;
}
int main()
{
    int a[100];///內附亂碼
    for(int i=0; i<100; i++) printf("%d ", a[i] );
    printf("\n");///先看看內容很亂哦

    qsort( a, 100, sizeof(int), comp );

    for(int i=0; i<100; i++) printf("%d ", a[i] );
    printf("\n");///排完之後, 檢查一下
    return 0;
}

/*
Q:如果有 10萬個數字要手中, 10萬*10萬=100億
    for(int k=0; k<100000-1; k++){///10萬
        for(int i=0; i<100000-1; i++){///10萬
*/
