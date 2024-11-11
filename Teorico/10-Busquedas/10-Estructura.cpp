#include <iostream>
using namespace std;

int main()
{
    // 📌 Búsqueda secuencial
    int BusquedaSecuencial(int vector[], int lenVector, int valorABuscar);

    int BusquedaSecuencial(int vector[], int lenVector, int valorABuscar)
    {
        // Itera sobre todos los elementos del array
        for (int i = 0; i < lenVector; i++)
        {
            if (vector[i] == valorABuscar)
            {
                return i; // Devuelve el índice del elemento encontrado
            }
        }

        return -1; // Devuelve -1 si no se encuentra el elemento
    }

    // 📌 Búsqueda binaria
    // ❗❗  El vector debe estar ordenado de forma ascendente
    int BusquedaBinaria(int vector[], int lenVector, int valorABuscar);

    int BusquedaBinaria(int vector[], int lenVector, int valorABuscar)
    {
        int inferior = 0;
        int superior = lenVector - 1;

        while (inferior <= superior)
        {
            int mitad = (inferior + superior) / 2;

            if (vector[mitad] == valorABuscar)
            {
                return mitad; // Devuelve el índice del elemento encontrado
            }

            if (vector[mitad] > valorABuscar)
            {
                superior = mitad - 1; // Ajustamos superior
            }
            else
            {
                inferior = mitad + 1; // Ajustamos inferior
            }
        }

        return -1; // Devuelve -1 si no se encuentra el elemento
    }

    // Muestra los resultados de la búsqueda
    void ImpresionBusqueda(int vector[], int lenVector, int valorABuscar);

    void ImpresionBusqueda(int vector[], int lenVector, int valorABuscar)
    {
        // int busqueda = BusquedaBinaria(vector, lenVector, valorABuscar);
        // int busqueda = BusquedaSecuencial(vector, lenVector, valorABuscar);

        if (busqueda == -1)
        {
            cout << "Valor no encontrado." << endl;
        }
        else
        {
            cout << "Valor encontrado. Se encuentra en la posicion: " << busqueda << endl;
        };
    };

    return 0;
}