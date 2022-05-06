///Week11-6.cpp step03-2 熟悉 vector
///把課本的範例寫完
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;///v是vector裡面裝int
    ///你沒說它要多大, 所以 v有0個
    v.push_back(10);///把10放進去, v有1個
    v.push_back(11);///把11放進去, v有2個
    v.push_back(15);///把13放進去, v有3個
              ///迭代子,迴圈會用到的那個i
    vector<int>::iterator it;
    for(it=v.begin() ; it!=v.end(); it++){///for(int i=0; i<3; i++){
        cout << *it << endl;              ///cout << v[i] << endl;
    }
}
