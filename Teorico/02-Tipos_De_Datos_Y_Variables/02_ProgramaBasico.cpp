#include <iostream>
using namespace std;

// Otras directivas pre-compilado...

int main()
{
    cout << "Hola mundo" << endl; // El comando "endl" hace un salto de línea.
    cout << "Hola! Por favor, ingresa un número: "; // Se produce una salida que le pide al usuario que ingrese un número.

    int numero; // Se inicializa una variable que va a contener a un número entero.
    cin >> numero; // Se lee el número ingresado por el usuario y se guarda en la variable 'numero'

    cout << "Has ingresado el número: " << numero << endl; // Se imprime el numero ingresado por el usuario

    return 0;
}