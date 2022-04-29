///Week01-3.cpp step02-2 一定要 .cpp 檔
///(1)檔案, (2)排序分數大-小, (3)使用物件class
#include <stdio.h>
class Record{ ///C++的物件, 用 class宣告, 裡面有名字、分數 包起來
public:///公開的欄位, 可以被別人 main()使用
    char name[30];
    int grade;
};
Record student[100];///有100筆學生的資料
int main()
{
    FILE * fin = fopen("input.txt", "r" );
    int N;
    fscanf( fin, "%d", &N );
    for(int i=0; i<N; i++){
        fscanf(fin, "%s %d", student[i].name, &student[i].grade);
    }
    for(int k=0; k<N-1; k++){
        for(int i=0; i<N-1; i++){
            if( student[i].grade < student[i+1].grade ){///不對,就交換
                Record temp = student[i];
                student[i] = student[i+1];
                student[i+1] = temp;
            }
        }
    }
    for(int i=0; i<N; i++){
        printf("%s %d\n", student[i].name, student[i].grade );
    }
}
