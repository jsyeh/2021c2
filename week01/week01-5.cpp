///Week01-5.cpp step02-3
///�b�ƨg�{�]���խ�誺�{��, �ק令 ans++
///�u�n�S���C��/�ǩǪ�,�@�w�����D!!!
#include <stdio.h>
#include <string.h> //���F strlen()�r�����
char line[1000];///�~���ŧi��,�|��l����0 ���b!
int main()
{
	for(int k=0; k<4; k++){///�j��]�ܦh��
		scanf("%s", line);		//�����b�FQQ
		int ans=0;//�j��e�� ans=0
		//for(int i=0; i< 1000 ; i++){
		//for(int i=0; i< strlen(line) ; i++){//�o�˷|�ӺC
		int N=strlen(line);///���o��r�����(�W�Ǵ��йL)
		for(int i=0; i<N; i++){///�A�ӵۦr����ץh�]�j��
		    //if( line[i] == '2' ) printf("���2\n");
		    if( line[i] == '2' ) ans++;
		    //�j�餤�� ans++
		}
		printf("%d\n", ans);//�j��᭱��ans�L�X��
	}
	return 0;
}
