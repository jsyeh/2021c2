///Week03-1.cpp step01-1
#include <stdio.h>
#include <string.h>
char line[2000];
int palindrome()
{
	int N=strlen(line);
	for(int i=0; i<N; i++){
		if( line[i] != line[N-1-i] ) return 0;//bad!!!
	}
	return 1;
}
int main()
{
	while( scanf("%s", line)==1 ){//�W�g��week02-1
		int p = palindrome();
		if(p==1) printf("%s -- is a palindrome.\n\n",line);
		if(p==0) printf("%s -- is not a palindrome.\n\n",line);
	}//�W�g��week02-1
	return 0;
}
