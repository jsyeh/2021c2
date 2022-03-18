///Week04-1.cpp step01-1
///複習上週教的, 利用字串迴圈來統計字母出現次數 ans[c]++
///後面再把字母ASCII大到小, 把答案印出來
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int ans[256]={};
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;
		}
        for(int c=128; c>=32; c--){
            if(ans[c]==f) printf("%d %d\n", c, ans[c]);
        }
		t++;
	}
	return 0;
}

