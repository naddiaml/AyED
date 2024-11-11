#include <iostream>
#include <string.h> // Para otras funciones

using namespace std;

int main()
{
    // 1️⃣ Definición de un C-style string
    const int maxLength = 100; // Longitud máxima del string
    char texto[maxLength];

    // 2️⃣ Solicitar al usuario que ingrese un texto
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(texto, maxLength); // Se usa getline para permitir espacios en el texto

    // 3️⃣ Operaciones:

    // Invertir una cadena
    strrev(texto); //  ❗❗ Ojo! Es una acción destructiva.

    // Convertir a mayúsculas
    strupr(texto);

    // Convertir a minúsculas
    strlwr(texto);

    // Convertir una cadena a un número de tipo int:
    atoi(cadenaDeNumeros);

    // Convertir una cadena a un númeroF de tipo float:
    atof(cadenaDeNumeros);

    // 4️⃣ Mostrar el texto ingresado
    cout << "Texto ingresado: " << texto << endl;

    return 0;
}
