///Week07-4.cpp step02-2 Input
///我們播放莫札特的歌劇中的一幕, 男生唱出一堆清單的統計, 到底主人喜歡哪些女生。
///本題就是想要把整個清單,依據國家來統計。第一步先把Input 及 Output 搞定,
///因為有很多空格, 所以需要 gets()讀進一整行, 讀到 line[i] 裡面
#include <stdio.h>
char line[2000][80];
 //      2000行 80字母
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		gets(  line[i]  );
	}

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}

}
