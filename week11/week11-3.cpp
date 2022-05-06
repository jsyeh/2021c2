//Week11-3.cpp step02-2
//想熟悉 C++ std::vector
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
	vector<Student> stu(N); //啟用 vector 的變數 stu, 可以裝N個
	//單位是Student  stu這個變數,可裝N個Student
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
