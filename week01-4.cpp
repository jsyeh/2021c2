///Week01-4.cpp step02-2
///�b�ƨg�{�]���խ�誺�{��, �ק令 ans++
///�u�n�S���C��/�ǩǪ�,�@�w�����D!!!
#include <stdio.h>
#include <string.h> //���F strlen()�r�����
char line[1000];///�~���ŧi��,�|��l����0 ���b!
int main()
{
    scanf("%s", line);		//�����b�FQQ
    int ans=0;//�j��e�� ans=0
    int N=strlen(line);
    for(int i=0; i<N; i++){
        //if( line[i] == '2' ) printf("���2\n");
        if( line[i] == '2' ) ans++;
        //�j�餤�� ans++
    }
    printf("%d\n", ans);//�j��᭱��ans�L�X��
}
