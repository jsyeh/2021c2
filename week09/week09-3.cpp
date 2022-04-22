///Week09-3.cpp step02-2 從大到小,改用while迴圈
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,4,5,0};
int main()
{
    int N=10;
    while(1){ ///一直做,直到好了,break

        int change=0;///進核心迴圈前,變動0個地方
        for(int i=0; i<N-1; i++){///泡泡排序法的核心
            if( grade[i] < grade[i+1] ){ ///反了,不符合需求
                int temp=grade[i];///就交換
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++;///有動到1個地方
            }
        }
        if(change==0) break; ///沒有動作,就提早結束休息

        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}
