#include <iostream>
using namespace std;
float f(float x)
{
    return 3*(x*x);
}
float derivada(float (*f)(float x),float a,float intervaloX)
{
    float inicialY=f(a);
    float finalY=f(a+intervaloX);
    float m=(finalY-inicialY)/intervaloX;
    return m;
}
float derivadaDerecha(float (*f)(float x),float a,float intervaloX)
{
    float inicialY=f(a);
    float finalY=f(a+intervaloX);
    float m=(finalY-inicialY)/intervaloX;
    return m;
}
float derivadaIsquierda(float (*f)(float x),float a,float intervaloX)
{
    float inicialY=f(a);
    float finalY=f(a+intervaloX);
    float m=(finalY-inicialY)/intervaloX;
    return -m;
}


int main()
{   
    cout << "derivada  "  << derivada(f,2,0.100) << endl;
    cout << "derivada  "  << derivadaIsquierda(f,2,0.100) << endl;
    
    return 0;
}