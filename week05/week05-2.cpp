///Week05-2.cpp step02-1 狡策獁獁逼猭BubbleSort
///砕碞琌–Ωǖ近,a[i] a[i+1]ぃ癸碞ユ传ǖ碭近
#include <stdio.h>
int a[10]={9,8,7, 1,2,3, 6,5,4, 0};
int main()
{
    for(int k=0; k<10-1; k++){
        for(int i=0; i<10-1; i++){
            if( a[i] > a[i+1] ){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");
    }
}

