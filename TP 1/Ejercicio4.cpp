/*
   4) Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un
      avi�n y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de
      ocupaci�n y el porcentaje de no ocupaci�n del mismo.

      Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de
      ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.
*/
#include <iostream>

using namespace std;

int main()
{
    int asientosDisp;
    int pasajeOcup;

    int total;

    float porcOcup;
    float porcDisp;

    cout << "Ingrese la cantidad de asientos disponibles: ";
    cin >> asientosDisp;

    cout << "Ingrese la cantidad de pasajes ocupados: ";
    cin >> pasajeOcup;

    total = asientosDisp + pasajeOcup;

    porcDisp = (float) asientosDisp * 100 / total;
    porcOcup = (float) pasajeOcup * 100 / total;

    cout << endl;
    cout << "Este es el porcentaje de ocupacion: "; cout << porcOcup; cout << "%"; cout << endl;
    cout << "Este es el porcentaje de no ocupacion: "; cout << porcDisp; cout << "%"; cout << endl;


    return 0;
}
