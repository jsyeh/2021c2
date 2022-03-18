///Week01-3.cpp step02-1

#include <stdio.h>
char line[1000];///外面宣告的,會初始成為0
int main()
{
    ///char line[1000];///沒有初始化init 成為0,將會誤判!!
    scanf("%s", line);
    for(int i=0; i< 1000 ; i++){
        if( line[i] == '2' ) printf("找到2\n");
    }
	return 0;
}
