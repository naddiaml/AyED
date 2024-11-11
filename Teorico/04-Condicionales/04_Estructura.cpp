#include <iostream>
using namespace std;

int main()
{
    // 📌 Sentencia If - ElseIf:
    if (condicion) {
        // Código a ejecutar si la condición se cumple
    } else if (otraCondicion) {
        // Código a ejecutar si la primera condición no se cumple pero la segunda sí
    } else {
        // Código a ejecutar si ninguna de las condiciones anteriores se cumplen
    };

    // 📌 Sentencia Switch:
    switch (expresion) {
    case valor1: // 1️⃣
        // Código a ejecutar si el resultado de la expresión coincide con el valor del caso
        break;

    case valor2: // 2️⃣
        // Código a ejecutar si el resultado de la expresión coincide con el valor del caso
        break;

    default: // #️⃣
             // Código a ejecutar si el resultado de la expresión no coincide con ninguno de los casos
        break;
    }

    return 0;
}