//Week11-3.cpp step02-2
//�Q���x C++ std::vector
#include <iostream>
#include <vector>
using namespace std ;
class Student{
public:
	char name[30];
	int grade;
};
bool Compare( Student a, Student b )
{

}
int main()
{
	int N;
	cin >> N;
	vector<Student> stu(N); //�ҥ� vector ���ܼ� stu, �i�H��N��
	//���OStudent  stu�o���ܼ�,�i��N��Student
	for(int i=0; i<N; i++){
		cin >> stu[i].name >> stu[i].grade;
		//cin >> name[i] >> grade[i];
	}

	stable_sort( stu.bein(), stu.end(), compare );

	for(int i=0; i<N; i++){
		cout << stu[i].name << " " << stu[i].grade << endl;
		//cout << name[i] << endl;
	}
}
