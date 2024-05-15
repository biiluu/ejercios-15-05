#include <iostream>
using namespace std;
int main()
{
    float c1, c2,p1,p2,lab,pro,promedio=0;
    string nombre;

    cout <<"Ingrese su nombre:\n";
    cin>> nombre;

    cout <<"Ingrese la nota del primer corto:\n";
    cin>> c1;

    cout <<"Ingrese la nota del segundo corto:\n";
    cin>> c2;

    cout <<"Ingrese la nota del primer parcial:\n";
    cin>> p1;

    cout <<"Ingrese la nota del segundo parcial:\n";
    cin >>p2;

    cout <<"Ingrese la nota del laborario:\n";
    cin >> lab;

    cout <<"Ingrese la nota del proyecto:\n";
    cin >> pro;

    promedio =((c1*0.1)+(c2*0.1)+(p1*0.15)+(p2*0.2)+(lab*0.2)+(pro*0.25));

    if (promedio>=6)
    {
        cout <<"Usted ha pasado la materia";
    }
    else  
    {
        cout <<"Usted no ha pasado la materia";
    }
return 0;
}
