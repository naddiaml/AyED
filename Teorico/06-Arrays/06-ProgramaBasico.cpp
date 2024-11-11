#include <iostream>
using namespace std;

void InicializarArray(int vector[], int cantidadDePosiciones, int ValorAInicializar);
void CargaMasiva(int vector[], int cantidadDePosiciones, int &lenVector);
void CargaM2Vector(int vector[], int cantidadDePosiciones, int &lenVector);
void Insertar(int vector[], int &lenVector, int posicionAInsertar, int valorAInsertar);
void InsertarOrdenado(int vector[], int &lenVector, int valorAInsertar);
int BuscarEnElArray(int vector[], int lenVector, int valorABuscar);
void ImpresionBusqueda(int vector[], int lenVector, int valorABuscar);
void EliminarDelArray(int vector[], int &lenVector, int posicionAEliminar);
void MostrarArray(int vector[], int lenVector);

int main()
{
    // ...

    return 0;
}

void InicializarArray(int vector[], int cantidadDePosiciones, int ValorAInicializar)
{
    cout << "Inicializando el array... " << endl;
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = ValorAInicializar;
    };
};

void CargaMasiva(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "Ingrese el valor a guardar en la posicion " << (i + 1) << endl;
        cin >> vector[i];
        lenVector++;
    };
};

void CargaM2Vector(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = i + 1;
        lenVector++;
    };
};

void Insertar(int vector[], int &lenVector, int posicionAInsertar, int valorAInsertar)
{
    // El for recorre el array partiendo de la cantidad máxima de posiciones ocupadas (len). La lógica es recorrer el array "De atrás hacia adelante" para mover todos los elementos a la próxima posición, a partir de la posición en la que se quiere agregar un elemento.
    // Supongamos que tengo el array: int Numeros [4], que por dentro es alo así: [1, 2, 4]. Suponiendo que quiero insertar el número 3 en la posición 2, tenemos que mover el elemento "4", que está en la posición 2, a la posición 3.

    // Mientras que el contador (i) sea mayor a la posición en la que queremos insertar el nuevo elemento, restamos uno al contador para ir disminuyendo la cantidad, y "movemos" el elemento en esta posición a la próxima.

    for (int i = lenVector; i > posicionAInsertar; i--)
    {
        vector[i] = vector[i - 1];
    };
    vector[posicionAInsertar] = valorAInsertar;
    lenVector++;
};

void InsertarOrdenado(int vector[], int &lenVector, int valorAInsertar)
{
    int posicionActual = 0; // Inicializo un contador que me permita comparar con el len (la cantidad de iteraciones está indeterminada, por eso no puedo usar un for).

    cout << "El valor a insertar es de: " << valorAInsertar << endl;
    cout << "El valor del len es: " << lenVector << endl;

    while (posicionActual < lenVector && vector[posicionActual] <= valorAInsertar)
    {
        cout << "La posicion actual es: " << posicionActual << endl;
        posicionActual++; // En caso de que el valor del contador (que funciona como el índice) sea menor que el valor que quiera insertar, incremento el contador en uno y revisa nuevamente.
    }
    // Suponiendo que ya se realizaron todas las verificaciones y llegamos a la última posición ↓
    if (posicionActual == lenVector)
    {
        vector[posicionActual] = valorAInsertar;
        lenVector++;
        cout << "Agregamos el número AL FINAL" << endl;
    }
    else
    {
        cout << "La posicion sustituida fue: " << posicionActual;
        Insertar(vector, lenVector, posicionActual, valorAInsertar);
    };
};

int BuscarEnElArray(int vector[], int lenVector, int valorABuscar)
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

void ImpresionBusqueda(int vector[], int lenVector, int valorABuscar)
{
    int busqueda = BuscarEnElArray(vector, lenVector, valorABuscar);
    if (busqueda == -1)
    {
        cout << "Valor no encontrado." << endl;
    }
    else
    {
        cout << "Valor encontrado. Se encuentra en la posicion: " << busqueda << endl;
    };
};

void EliminarDelArray(int vector[], int &lenVector, int posicionAEliminar)
{
    for (int i = posicionAEliminar; i < (lenVector - 1); i++)
    {
        vector[i] = vector[i + 1];
    }
    lenVector--;
}

void MostrarArray(int vector[], int lenVector)
{
    for (int i = 0; i < lenVector; i++)
    {
        cout << "El elemento en la posicion " << i << " tiene el valor de: " << vector[i] << endl;
    };
};