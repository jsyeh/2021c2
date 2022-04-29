///Week01-1.cpp step01-1 一定要 .cpp 檔 模仿今天的考試,但改用檔案
///1. 在 CodeBlocks 要把 input.txt 準備好(從瘋狂程設copy來)
///2. `FILE * fin = fopen("intput.txt", "r");`
///3. scanf() 改成 fscanf(fin, )
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
