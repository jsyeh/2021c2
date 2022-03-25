///Week05-5.cpp step03-2_今天的主題  Hardwood species
///將樹的物種名字做排序統計
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40];//100萬顆樹,名字30字母,開40用
int comp( const void *p1, const void *p2 ){
	char * tree1 = (char*) p1;
	char * tree2 = (char*) p2;
	return strcmp(tree1, tree2);
}
int main()
{
	int T;
	scanf("%d\n\n", &T); ///順便處理掉2個跳行

	///t:1 火車頭 t:2 +車廂 t:3 +車廂 ....
	for(int t=1; t<=T; t++){ ///t是第幾筆資料
		if(t>1) printf("\n");

		int N=0;//幾顆樹
		while( gets( tree[N] ) ){
			if( tree[N][0]==0 ) break; ///讀到空白行,表示是下一筆測資
            N++;
		}

		qsort( tree, N, 40, comp );

		for(int i=0; i<N; i++){
			printf("%s \n", tree[i] );
		}
	}
}
