///Week02-1.cpp step02-1 �j�� �Y���ۦP
/// 2021 1202 �ڭ̦��b�@�ɰj���,�g�L�o�ӵ{��
#include <stdio.h>
#include <string.h> ///strlen()�禡
char line[1000];
int palindrome()
{   ///02: �p��ѨM�P�_�Y���ۦP
    int N=strlen(line);
    for(int i=0; i<N; i++){ ///0....N-1
        if( line[i] != line[N-1-i] ) return 0;///bad=1;///�a��
    }
    return 1;///�q�L����������,�S���a,good!
}
int main()
{
	while( scanf("%s",line)==1 ){
        int p = palindrome();///�ϥΨ禡�ӧP�_, 1�O, 0���O
		if(p==1) printf("%s -- is a regular palindrome.\n\n",line);
		if(p==0) printf("%s -- is not a palindrome.\n\n", line);
	}
}
