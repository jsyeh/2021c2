///Week05-4.cpp step03-1
///step03-1_���Ѫ��D�D�O�n�� Hardwood species �N�𪺪��ئW�r���Ƨǲέp,�䤤�ڭ̥�����Ū�i�ӡC
#include <stdio.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n", &T); ///���K�B�z��2�Ӹ���

	///t:1 �����Y t:2 +���[ t:3 +���[ ....
	for(int t=1; t<=T; t++){ ///t�O�ĴX�����
		if(t>1) printf("\n");

		printf("�{�bŪ���%d�j�@�����\n", t);
		while( gets(line) ){
			if( line[0]==0 ) break; ///Ū��ťզ�,��ܬO�U�@������T��
            ///��1�Ӧr��,��n�O�r�ꪺ����, �N�O�ťզ�
		}
	}
}
