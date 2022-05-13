/// Week12-1.cpp step01-1
///Q: 迴圈要怎麼寫 遇到0結束
///Q: 最大值怎麼算? 如果數字比max還大, max換人當
///Q: Output

#include <stdio.h>

int main()
{         ///反過來想的極端
	int n, max=-99999, min=99999;///拋磚引玉
	for(int i=0; i<30; i++){
		scanf("%d", &n);
		if( n==0 ) break;

		if( n>max ) max = n;
		if( n<min ) min = n;
	}

	printf("[%d,%d]", min, max);
}
