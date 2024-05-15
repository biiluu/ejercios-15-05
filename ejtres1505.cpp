#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Ingrese un angulo en grados:\n";
    cin >>n;

    if (n>90)
    {
        cout <<"El angulo ingresado es agudo";
    }
    else if (n<90)
    {
        cout <<"El angulo ingresado es obtuso";
    }
    else if (n==90)
    {
        cout <<"El angulo ingresado es recto";
    }
return 0; 
}