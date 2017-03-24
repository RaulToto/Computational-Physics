#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;
template<typename T>

class vector
{
public:
    vector():x(0),y(0),z(0){}
    vector(T,T,T);
    vector sum(vector<T> &,vector<T> &);
    T getX();
    T getY();
    T getZ();
    vector operator +(vector vec)
    {
        vector tem;
        tem.x=x+vec.x;
        tem.y=y+vec.y;
        tem.z=z+vec.z;
        return tem;
    }
    vector operator -(vector vec)
    {
        vector tem;
        tem.x=x-vec.x;
        tem.y=y-vec.y;
        tem.z=z-vec.z;
        return tem;
    }



    friend ostream& operator << (ostream& output,vector& pt)
    {
        output << "(" << pt.x<< ","<< pt.y << ","<< pt.z<<")" ;
    }


private:
    T x,y,z;
};

#endif // VECTOR_H
