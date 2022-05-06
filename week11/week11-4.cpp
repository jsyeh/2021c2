//Week11-4.cpp step02-3
//stable_sort
#include <iostream>
#include <vector>
#include <algorithm> //�u��Ƶ��c�B�t��k�v���t��k
using namespace std ;
class Student{
public:
	char name[30];
	int grade;
};
bool compare( Student a, Student b )
{
	return a.grade > b.grade ;
}
int main()
{
	int N;
	cin >> N;
	vector<Student> stu(N);
	for(int i=0; i<N; i++){
		cin >> stu[i].name >> stu[i].grade;
	}

	stable_sort( stu.begin(), stu.end(), compare );

	for(int i=0; i<N; i++){
		cout << stu[i].name << " " << stu[i].grade << endl;
	}
}
