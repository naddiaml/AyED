#include <iostream>
using namespace std;

int main()
{
    // 📌 Ordenamiento Burbuja con punteros
    void OrdenamientoBurbuja(int *vector, int lenVector);

    void OrdenamientoBurbuja(int *vector, int lenVector)
    {
        cout << "Ordenando el vector... OB" << endl;

        for (int i = 0; i < lenVector - 1; i++) // Recorre el vector varias veces hasta ordenar todos los elementos
        {

            for (int j = 0; j < lenVector - 1 - i; j++) // Reduce el rango para no iterar sobre elementos ya ordenados
            {
                // Definición de punteros para los elementos actual y siguiente en el arreglo
                int *punteroElementoActual = vector + j;
                int *punteroSiguienteElemento = vector + j + 1;

                // Compara los valores de los punteros y los intercambia si es necesario
                if (*punteroElementoActual > *punteroSiguienteElemento)
                {
                    int auxiliar = *punteroElementoActual;
                    *punteroElementoActual = *punteroSiguienteElemento;
                    *punteroSiguienteElemento = auxiliar;
                }
            }
        }
    };

    // 📌 Ordenamiento por Inserción con punteros
    void OrdenamientoPorInsercion(int *vector, int lenVector);

    void OrdenamientoPorInsercion(int *vector, int lenVector)
    {
        cout << "Ordenando el vector... OxI" << endl;
        // Itera desde el segundo elemento hasta el final del arreglo
        for (int i = 1; i < lenVector; i++)
        {
            // Define el valor actual y un puntero a la posición actual
            int valorActual = *(vector + i);
            int *punteroPosicionActual = vector + i;

            // Mueve elementos a la derecha mientras sean mayores que el valor actual
            while (punteroPosicionActual > vector && *(punteroPosicionActual - 1) > valorActual)
            {
                *punteroPosicionActual = *(punteroPosicionActual - 1); // Desplaza el valor a la derecha
                punteroPosicionActual--; // Retrocede el puntero para continuar comparando
            }
            // Coloca el valor actual en la posición correcta
            *punteroPosicionActual = valorActual;
        }
    };

    // 📌 Ordenamiento por Selección con punteros
    void OrdenamientoPorSeleccion(int *vector, int lenVector);

    void OrdenamientoPorSeleccion(int *vector, int lenVector)
    {
        cout << "Ordenando el vector... OxS" << endl;
        for (int i = 0; i < lenVector - 1; i++)
        {
            // Define el puntero al menor elemento como la posición actual
            int *punteroMenorElemento = vector + i;

            // Recorre el resto del arreglo desde el siguiente elemento
            for (int *punteroElementoActual = vector + i + 1; punteroElementoActual < vector + lenVector; punteroElementoActual++)
            {
                // Si el valor apuntado es menor que el actual mínimo, actualiza el puntero al menor
                if (*punteroElementoActual < *punteroMenorElemento)
                {
                    punteroMenorElemento = punteroElementoActual;
                }
            }

            // Si el menor no es el elemento actual, intercambia sus valores
            if (punteroMenorElemento != vector + i)
            {
                int auxiliar = *(vector + i);
                *(vector + i) = *punteroMenorElemento;
                *punteroMenorElemento = auxiliar;
            }
        }
    };

    return 0;
}
