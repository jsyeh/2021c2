///Week03-2.cpp step02-1 用 C Tutor 跑它!
/// https://pythontutor.com/c.html#mode=edit
#include <stdio.h>
#include <string.h>
char line[15]="123454321";
char *p1, *p2;///主題: pointer指標,指到你要看的地方
int palindrome()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){
        p1 = & line[i]; ///主題: pointer指標 &表示變數的address住址
        p2 = & line[N-1-i]; ///主題: pointer指標 &表示變數的address住址
        if( line[i] != line[N-1-i] ) return 0;//bad!!!
    }
    return 1;
}
int main()
{
    ///while( scanf("%s", line)==1 ){//上週的week02-1 //不要用while及scanf()
        int p = palindrome();
        if(p==1) printf("%s -- is a palindrome.\n\n",line);
        if(p==0) printf("%s -- is not a palindrome.\n\n",line);
    ///}//上週的week02-1
    return 0;
}
