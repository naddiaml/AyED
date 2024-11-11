#include <iostream>
using namespace std;

int main()
{
    // 📌 Ordenamiento Burbuja
    void OrdenamientoBurbuja(int vector[], int lenVector);

    void OrdenamientoBurbuja(int vector[], int lenVector)
    {
        cout << "Ordenando el vector... OB" << endl;
        for (int i = 0; i < lenVector - 1; i++)
        {
            for (int j = 0; j < lenVector - 1 - i; j++) // Optimización para no comparar elementos ya ordenados
            {
                if (vector[j] > vector[j + 1])
                {
                    // Intercambio
                    int auxiliar = vector[j];
                    vector[j] = vector[j + 1];
                    vector[j + 1] = auxiliar;
                }
            }
        }
    };

    // 📌 Ordenamiento por Insercion
    void OrdenamientoPorInsercion(int vector[], int lenVector);

    void OrdenamientoPorInsercion(int vector[], int lenVector)
    {
        cout << "Ordenando el vector... OxI" << endl;
        for (int i = 1; i < lenVector; i++)
        {
            int numeroActual = vector[i];
            int posicion = i;

            while (posicion > 0 && vector[posicion - 1] > numeroActual)
            {                                            // Intercambia la posición de los elementos si es que el elemento actual tiene algún otro a su izquierda y si este es mayor al actual ↓
                vector[posicion] = vector[posicion - 1]; // se mueve el elemento una posición a la izquierda"
                posicion--;
            }
            // Colocar el número actual en la posición correcta
            vector[posicion] = numeroActual;
        }
    };

    // 📌 Ordenamiento por selección
    void OrdenamientoPorSeleccion(int vector[], int lenVector);

    void OrdenamientoPorSeleccion(int vector[], int lenVector)
    {
        cout << "Ordenando el vector... OxS" << endl;
        for (int i = 0; i < lenVector - 1; i++) // Consideremos a i como la posición actual
        {
            int indiceMenorElemento = i; // Se asume que el menor elemento es "el primero" que tomammos.

            //  Empieza a recorrer el resto del array a partir de la primera posición para buscar el menor elemento en el subvector no ordenado
            for (int indiceActual = i + 1; indiceActual < lenVector; indiceActual++)
            {
                if (vector[indiceActual] < vector[indiceMenorElemento])
                { // Si uno de los elementos es menor al primero que "agarramos", establecemos que el indice del menor (que era, previamente, el primero, pase a ser el índice del elemento actual.
                    indiceMenorElemento = indiceActual;
                }
            }

            // En caso de que el menor elemento no sea el asumido previamente, se almacena su valor en una variable auxiliar y se hace el intercambio.
            if (indiceMenorElemento != i)
            {
                int auxiliar = vector[i];
                vector[i] = vector[indiceMenorElemento];
                vector[indiceMenorElemento] = auxiliar;
            }
        }
    };

    return 0;
}