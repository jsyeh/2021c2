//Week03-4.cpp
//Q:�p��L�X������ "\n"
#include <stdio.h>

char line[2000];
int main()
{
	int t=1;//�ޥ�1: �@�}�l�O�����Y,���α���

	//while( scanf("%s",line)==1 ){//���w����,��while
	while( gets(line) ){ //�ޥ�2: gets()�iŪ�@���

		if(t>1) printf("\n");///�ޥ�1: �᭱���[������

		printf("���[%dŪ��@����Ʈ@\n", t);

		t++;//�ޥ�1: �������[���Q�k
	}
	return 0;
}
