//file includes
#include "vector.h"
#include "vector.cpp"
//libraries
#include <iostream>
using namespace std;

int main()
{

    vector<int> vector1(3,4,5);
    vector<int> vector2(5,6,7);
    vector<int> sumVec;
    vector<int> restVec;
    sumVec=vector1+vector2;
    restVec=vector1-vector2;
    cout << vector1 << "+" << vector2 <<"=" << sumVec << endl;
    cout << vector1 << "-" << vector2 <<"=" << restVec << endl;

}
