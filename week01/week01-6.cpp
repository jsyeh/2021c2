///Week01-6.cpp step03-1
#include <stdio.h>
#include <string.h> //���F strlen()�r�����
char line[1000];///�~���ŧi��,�|��l����0 ���b!
int main()
{
	int total=0;
	//�j�馳2��: for���D���X�� while�����D���X��
	  //����:Ū�J�@�Ӧr�� �k��1�ӨS��
	while( scanf("%s", line)==1 ){ //�p�G�����\Ū��!!!
	//for(int k=0; k<4; k++){///�j��]�ܦh��
		//scanf("%s", line);
		int ans=0;
		int N=strlen(line);///���o��r�����(�W�Ǵ��йL)
		for(int i=0; i<N; i++){///�A�ӵۦr����ץh�]�j��
		    if( line[i] == '2' ) ans++;
		}
		printf("%d\n", ans);//�j��᭱��ans�L�X��
		total += ans;
	}
	printf("Total: %d\n", total );
	return 0;
}
