///Week01-5.cpp step02-3
///在瘋狂程設測試剛剛的程式, 修改成 ans++
///只要沒變顏色/怪怪的,一定有問題!!!
#include <stdio.h>
#include <string.h> //為了 strlen()字串長度
char line[1000];///外面宣告的,會初始成為0 乾淨!
int main()
{
	for(int k=0; k<4; k++){///迴圈跑很多次
		scanf("%s", line);		//不乾淨了QQ
		int ans=0;//迴圈前面 ans=0
		//for(int i=0; i< 1000 ; i++){
		//for(int i=0; i< strlen(line) ; i++){//這樣會太慢
		int N=strlen(line);///先得到字串長度(上學期教過)
		for(int i=0; i<N; i++){///再照著字串長度去跑迴圈
		    //if( line[i] == '2' ) printf("找到2\n");
		    if( line[i] == '2' ) ans++;
		    //迴圈中間 ans++
		}
		printf("%d\n", ans);//迴圈後面把ans印出來
	}
	return 0;
}
