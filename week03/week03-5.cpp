//Week03-X.cpp
#include <stdio.h>
int ans[256];

char line[2000];
int main()
{
	int t=1;

	while( gets(line) ){ //�ޥ�2: gets()�iŪ�@���
		if(t>1) printf("\n");///�ޥ�1: �᭱���[������

		//�j��e������ans �M��0
		for(int c=28; c<=128; c++) ans[c]=0;

		for(int i=0; line[i]!=0; i++){//�r��j��
			char c=line[i];//�{�b���r��
			ans[ c ] ++;  //if( line[i]=='2') ans++;//�j��
		}//�έp���X�� '2', '3', ...

		//�j��᭱,��ans�L�X��
		for(int c=28; c<=128; c++){
			if( ans[c]>0 ) printf("%d %d\n", c, ans[c]);
		}

		t++;//�ޥ�1: �������[���Q�k
	}
	return 0;
}
