///Week01-4.cpp step02-2
///在瘋狂程設測試剛剛的程式, 修改成 ans++
///只要沒變顏色/怪怪的,一定有問題!!!
#include <stdio.h>
#include <string.h> //為了 strlen()字串長度
char line[1000];///外面宣告的,會初始成為0 乾淨!
int main()
{
    scanf("%s", line);		//不乾淨了QQ
    int ans=0;//迴圈前面 ans=0
    int N=strlen(line);
    for(int i=0; i<N; i++){
        //if( line[i] == '2' ) printf("找到2\n");
        if( line[i] == '2' ) ans++;
        //迴圈中間 ans++
    }
    printf("%d\n", ans);//迴圈後面把ans印出來
}
