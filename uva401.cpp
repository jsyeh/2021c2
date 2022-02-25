// UVA 401 Palindromes
#include <stdio.h>
#include <string.h>
char line[1000];

char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char table2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror( char c )
{
	for(int i=0; table1[i]!=0; i++){
		if( c == table1[i] ) return table2[i];
	}//如果在 table1 裡找到這個字母, 就回傳 table2 的對應字母
	return ' ';
}
int isMirrored()
{
	int N = strlen(line);
	for(int i=0; i<N; i++){//可改 N/2 會快一些
		if( mirror(line[i]) != line[N-1-i] ) return 0;//有不符合, bad
	}
	return 1;//good 全部都符合
}
int isPalindrome()
{
	int N = strlen(line);
	for(int i=0; i<N; i++){//可改 N/2 會快一些
		if( line[i] != line[N-1-i] ) return 0;//有不符合, bad
	}
	return 1;//good 全部都符合
}
int main()
{
	while( scanf("%s", line) == 1 ){
		int p=isPalindrome();
		int m=isMirrored();
		if( p==1 && m==1 ) printf("%s -- is a mirrored palindrome.\n\n", line);
		if( p==1 && m==0 ) printf("%s -- is a regular palindrome.\n\n", line);
		if( p==0 && m==1 ) printf("%s -- is a mirrored string.\n\n", line);
		if( p==0 && m==0 ) printf("%s -- is not a palindrome.\n\n", line);
	}
	return 0;
}