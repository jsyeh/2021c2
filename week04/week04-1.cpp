///Week04-1.cpp step01-1
///�ƲߤW�g�Ъ�, �Q�Φr��j��Ӳέp�r���X�{���� ans[c]++
///�᭱�A��r��ASCII�j��p, �⵪�צL�X��
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int ans[256]={};
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;
		}
        for(int c=128; c>=32; c--){
            if(ans[c]==f) printf("%d %d\n", c, ans[c]);
        }
		t++;
	}
	return 0;
}

