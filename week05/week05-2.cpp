///Week05-2.cpp step02-1 複習「泡泡排序法BubbleSort」
///口訣就是「每次巡一輪,a[i] a[i+1]大小不對就交換。多巡幾輪」
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

