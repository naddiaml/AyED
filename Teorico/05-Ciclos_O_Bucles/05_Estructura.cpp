#include <iostream>
using namespace std;

int main()
{
    // 📌 Sentencia While:
    while (condicion) {
        // Conjunto de instrucciones a ejecutar si la expresión se cumple. 
        // ❗❗ A diferencia de la sentencia if, esta se repite un número indefinido de veces hasta que la condición ya no se cumpla
    }

    // 📌 Sentencia Do-While:
    do {
        // Conjunto de instrucciones a ejecutar al menos una única vez.
    } while (condicion) // Una vez se ejecutan al menos una vez las instrucciones en el bloque 'do', se verifica la condición. Si se cumple, se vuelve a ejecutar el bloque do y así sucesivamente. El bucle se rompe una vez no se verifica la condición

    // 📌 Sentencia For:
    for (int contador = valorInicial; condicion; incrementoContador/decrementoContador) {
        // Instrucciones a ejecutar
    } // En este caso, el bucle se ejecuta a un número finito de veces, a dierencia del bucle while y do-while.

    return 0;
}