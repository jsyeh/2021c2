///Week09-1.cpp step01-1 �q�p��j
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,4,5,0};
int main()
{
    int N=10;
    for(int k=0; k<N-1; k++){
        for(int i=0; i<N-1; i++){///�w�w�ƧǪk���֤�
            if( grade[i] > grade[i+1] ){ ///�ϤF,���ŦX�ݨD
                int temp=grade[i];///�N�洫
                grade[i]=grade[i+1];
                grade[i+1]=temp;
            }
        }
        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}
