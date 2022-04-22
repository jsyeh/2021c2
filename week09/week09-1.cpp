///Week09-1.cpp step01-1 從小到大
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,4,5,0};
int main()
{
    int N=10;
    for(int k=0; k<N-1; k++){
        for(int i=0; i<N-1; i++){///泡泡排序法的核心
            if( grade[i] > grade[i+1] ){ ///反了,不符合需求
                int temp=grade[i];///就交換
                grade[i]=grade[i+1];
                grade[i+1]=temp;
            }
        }
        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}
