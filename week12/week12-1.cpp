/// Week12-1.cpp step01-1
///Q: �j��n���g �J��0����
///Q: �̤j�ȫ���? �p�G�Ʀr��max�٤j, max���H��
///Q: Output

#include <stdio.h>

int main()
{         ///�ϹL�ӷQ������
	int n, max=-99999, min=99999;///�߿j�ޥ�
	for(int i=0; i<30; i++){
		scanf("%d", &n);
		if( n==0 ) break;

		if( n>max ) max = n;
		if( n<min ) min = n;
	}

	printf("[%d,%d]", min, max);
}
