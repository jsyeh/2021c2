///Week07-7.cpp step03-3 最後統計
///最後我們統計出各個國家出現的次數,
///利用迴圈,把上下2筆資料 strcmp(line[i],line[i+1])==0看是否相同
///相同就combo++,不相同就可以印出 line[i] 那個國家對應的 combo數量。
///裡面有2個地方比較特別,分別是迴圈跑到什麼時候結束,
///及對應的 line[N]的「哨兵sentinal」在超過的地方標註成空字串
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2001][80];
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
		char others[80];
		gets(  others  );
	}

	qsort( line, N, 80, compare );

	line[N][0]=0;//空字串
	int combo=1;
	for(int i=0; i<N; i++){
		if( strcmp(line[i],line[i+1])==0 ){//上下2行
			combo++;//相同
		}else{//不相同:印答案
			printf("%s %d\n", line[i], combo );
			combo=1;
		}
	}
}
