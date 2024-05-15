#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2,x;

    cout<<"Ingrese el valor de a:\n";
    cin >>a;

    cout<<"Ingrese el valor de b:\n";
    cin>> b;

    cout <<"Ingrese el valor de c:\n";
    cin >>c;

    r1= (-b +sqrt(b*b + 4*a*c))/(2*a);
    r2= (-b+sqrt(b*b+4*a*c))/(2*a);
    x=-c/b;
    float i=b*b-4*a*c;

    if(i<0);
    {
        cout <<"La solucion no se encuentra en los numeros reales";
    
    }
    if(a==0)
    {
        cout <<"No es valido";
    }
    else if (b==0)
    {
        cout <<"No es valido";
    }
return 0;

}
