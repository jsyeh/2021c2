///Week02-1.cpp step02-1 迴文 頭尾相同
/// 2021 1202 我們有在世界迴文日,寫過這個程式
#include <stdio.h>
#include <string.h> ///strlen()函式
char line[1000];
int palindrome()
{   ///02: 如何解決判斷頭尾相同
    int N=strlen(line);
    for(int i=0; i<N; i++){ ///0....N-1
        if( line[i] != line[N-1-i] ) return 0;///bad=1;///壞掉
    }
    return 1;///通過全部的考驗,沒有壞,good!
}
int main()
{
	while( scanf("%s",line)==1 ){
        int p = palindrome();///使用函式來判斷, 1是, 0不是
		if(p==1) printf("%s -- is a regular palindrome.\n\n",line);
		if(p==0) printf("%s -- is not a palindrome.\n\n", line);
	}
}
