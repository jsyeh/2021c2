///Week01-6.cpp step03-1
#include <stdio.h>
#include <string.h> //為了 strlen()字串長度
char line[1000];///外面宣告的,會初始成為0 乾淨!
int main()
{
	int total=0;
	//迴圈有2種: for知道有幾個 while不知道有幾個
	  //左邊:讀入一個字串 右邊1個沒錯
	while( scanf("%s", line)==1 ){ //如果有成功讀到!!!
	//for(int k=0; k<4; k++){///迴圈跑很多次
		//scanf("%s", line);
		int ans=0;
		int N=strlen(line);///先得到字串長度(上學期教過)
		for(int i=0; i<N; i++){///再照著字串長度去跑迴圈
		    if( line[i] == '2' ) ans++;
		}
		printf("%d\n", ans);//迴圈後面把ans印出來
		total += ans;
	}
	printf("Total: %d\n", total );
	return 0;
}
