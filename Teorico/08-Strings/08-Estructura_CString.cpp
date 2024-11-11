#include <iostream>
#include <cstring> // Para funciones de manejo de C-style strings

using namespace std;

int main() {
    /* En C++, un string es una secuencia de caracteres que representa texto.
       - Puede ser de tamaño fijo (C-style strings son arreglos de char).
       - Se pueden manipular con funciones de la biblioteca cstring.
    */

    // 1️⃣ Definición de un C-style string
    const int maxLength = 100; // Longitud máxima del string
    char texto[maxLength];

    // 2️⃣ Solicitar al usuario que ingrese un texto
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(texto, maxLength); // Se usa getline para permitir espacios en el texto

    // 3️⃣ Operaciones: 

    // Mostrar la longitud de la cadena usando cstring
    size_t longitud = strlen(texto);
    // size_t es un tipo de dato definido en C y C++ que se utiliza para representar tamaños y conteos.
    // strlen devuelve el número de caracteres en la cadena.
    cout << "La longitud de la cadena es: " << longitud << endl;

    // Comparar dos cadenas
    const char* otraCadena = "Hola, mundo!";
    if (strcmp(texto, otraCadena) == 0) {
        cout << "Las cadenas son iguales." << endl;
    } else {
        cout << "Las cadenas son diferentes." << endl;
    }

    // Copiar una cadena en otra:
    strcpy(destino, origen); // Copia los caracteres de "origen" en el arreglo de caracteres "destino"

    // Concatenar dos cadenas:
    strcat(cadena1, cadena2); // Agrega el contenido de la cadena 2 al final de la cadena 1
    // ❗❗ Cadena1 debe tener espacio suficiente como para guardar el contenido de ambas cadenas

    // 4️⃣ Mostrar el texto ingresado
    cout << "Texto ingresado: " << texto << endl;

    return 0;
}
