//Week03-X.cpp
#include <stdio.h>
int ans[256];

char line[2000];
int main()
{
	int t=1;

	while( gets(line) ){ //技巧2: gets()可讀一整行
		if(t>1) printf("\n");///技巧1: 後面車廂有掛勾

		//迴圈前面有個ans 清為0
		for(int c=28; c<=128; c++) ans[c]=0;

		for(int i=0; line[i]!=0; i++){//字串迴圈
			char c=line[i];//現在的字母
			ans[ c ] ++;  //if( line[i]=='2') ans++;//迴圈
		}//統計有幾個 '2', '3', ...

		//迴圈後面,把ans印出來
		for(int c=28; c<=128; c++){
			if( ans[c]>0 ) printf("%d %d\n", c, ans[c]);
		}

		t++;//技巧1: 火車車廂的想法
	}
	return 0;
}
