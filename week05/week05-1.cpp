///Week05-1.cpp step01-1 Selection Sort
///左手i,右手j
#include <stdio.h>
int a[10]={9,8,7, 1,2,3, 6,5,4, 0};
int main()
{
    for(int i=0; i<10; i++){///左手i
        for(int j=i+1; j<10; j++){///右手j
            if( a[i] > a[j] ){ ///大小不對,交換
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0; i<10; i++) printf("%d ", a[i] );
}
