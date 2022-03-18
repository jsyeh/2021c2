///Week02-5.cpp step03-2
#include <stdio.h>
#include <string.h> ///strlen()函式
char line[1000];
int palindrome()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){ ///0....N-1
        if( line[i] != line[N-1-i] ) return 0;///bad=1;///壞掉
    }
    return 1;///通過全部的考驗,沒有壞,good!
}
int mirror()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){ ///0....N-1
        if( mirror_char(line[i]) != line[N-1-i] ) return 0;///bad=1;///壞掉
    }
    return 1;///通過全部的考驗,沒有壞,good!
}
int main()
{
	while( scanf("%s",line)==1 ){
        int p = palindrome();///使用函式來判斷, 1是, 0不是
        int m = mirror();///使用函式來判斷, 1是, 0不是
		if(p==1 && m==1) printf("%s -- is a mirrored palindrome.\n\n",line);
		if(p==1 && m==0) printf("%s -- is a regular palindrome.\n\n",line);
		if(p==0 && m==1) printf("%s -- is a mirrored string.\n\n", line);
		if(p==0 && m==0) printf("%s -- is not a palindrome.\n\n", line);
	}
}

