///Week11-6.cpp step03-2 ���x vector
///��ҥ����d�Ҽg��
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;///v�Ovector�̭���int
    ///�A�S�����n�h�j, �ҥH v��0��
    v.push_back(10);///��10��i�h, v��1��
    v.push_back(11);///��11��i�h, v��2��
    v.push_back(15);///��13��i�h, v��3��
              ///���N�l,�j��|�Ψ쪺����i
    vector<int>::iterator it;
    for(it=v.begin() ; it!=v.end(); it++){///for(int i=0; i<3; i++){
        cout << *it << endl;              ///cout << v[i] << endl;
    }
}
