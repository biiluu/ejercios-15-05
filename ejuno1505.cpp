#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout <<"Ingrese el angulo 1:\n";
    cin >>a;
    
    cout <<"Ingrese el angulo 2:\n";
    cin >>b;

    c=180-(a+b);
    cout <<"El valor del angulo restante es:\n" << c;
    

    if (a+b<180)
    {
        cout <<"El tercer angulo es: ";
    }
    else (a+b>180);
    {
        cout <<"Los angulos ingresados no forman un triangulo";
    }
return 0;
}
