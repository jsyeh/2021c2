///Week02-5.cpp step03-2
#include <stdio.h>
#include <string.h> ///strlen()�禡
char line[1000];
int palindrome()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){ ///0....N-1
        if( line[i] != line[N-1-i] ) return 0;///bad=1;///�a��
    }
    return 1;///�q�L����������,�S���a,good!
}
int mirror()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){ ///0....N-1
        if( mirror_char(line[i]) != line[N-1-i] ) return 0;///bad=1;///�a��
    }
    return 1;///�q�L����������,�S���a,good!
}
int main()
{
	while( scanf("%s",line)==1 ){
        int p = palindrome();///�ϥΨ禡�ӧP�_, 1�O, 0���O
        int m = mirror();///�ϥΨ禡�ӧP�_, 1�O, 0���O
		if(p==1 && m==1) printf("%s -- is a mirrored palindrome.\n\n",line);
		if(p==1 && m==0) printf("%s -- is a regular palindrome.\n\n",line);
		if(p==0 && m==1) printf("%s -- is a mirrored string.\n\n", line);
		if(p==0 && m==0) printf("%s -- is not a palindrome.\n\n", line);
	}
}

