/*
    9) Hacer un programa para ingresar tres n�meros y listar el m�ximo de ellos.
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if(num1 > num2 && num1 > num3)
    {
        cout << endl << "El maximo de los numeros es: " << num1 << endl;
    }
    else if(num2 > num1 && num2 > num3)
    {
        cout << endl << "El maximo de los numeros es: " << num2 << endl;
    }
    else
    {
        cout << endl << "El maximo de los numeros es: " << num3 << endl;
    }

    return 0;
}
