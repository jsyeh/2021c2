///Week01-3.cpp step02-2 �@�w�n .cpp ��
///(1)�ɮ�, (2)�ƧǤ��Ƥj-�p, (3)�ϥΪ���class
#include <stdio.h>
class Record{ ///C++������, �� class�ŧi, �̭����W�r�B���� �]�_��
public:///���}�����, �i�H�Q�O�H main()�ϥ�
    char name[30];
    int grade;
};
Record student[100];///��100���ǥͪ����
int main()
{
    FILE * fin = fopen("input.txt", "r" );
    int N;
    fscanf( fin, "%d", &N );
    for(int i=0; i<N; i++){
        fscanf(fin, "%s %d", student[i].name, &student[i].grade);
    }
    for(int k=0; k<N-1; k++){
        for(int i=0; i<N-1; i++){
            if( student[i].grade < student[i+1].grade ){///����,�N�洫
                Record temp = student[i];
                student[i] = student[i+1];
                student[i+1] = temp;
            }
        }
    }
    for(int i=0; i<N; i++){
        printf("%s %d\n", student[i].name, student[i].grade );
    }
}
