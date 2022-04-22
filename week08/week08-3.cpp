///Week08-3.cpp step02-2 檔案輸出 2行
#include <stdio.h>

int main()
{///檔案指標    開啟檔案  檔名       模式w+ 寫+
    FILE * f = fopen( "檔案輸出.txt", "w+" );
    fprintf(f ,"Hello我在這裡哦\n" );

     printf(   "Hello World\n");
}
