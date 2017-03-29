#include <iostream>
using namespace std;
float f(float x)
{
    return 2*x;
}
float integral(float (*f)(float x),float a,float b, float n)
{
    float I=0;
    float intervaloX=(b-a)/n;
    float x,y;
    for (int i = 1; i <= n; i++)
    {
        x=a+intervaloX*i;
        y=f(x);
        I+=y*intervaloX;
    }
    return I;
}

int main()
{   
    float I;
    I=integral(f,0,2.1,100000);    
    cout << "integral " << I << endl;
}