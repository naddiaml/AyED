#include <iostream>
using namespace std;

struct Nodo
{
    int dato;        // Dato que almacena el nodo
    Nodo *siguiente; // Puntero al siguiente nodo
};

void Encolar(Nodo *&frente, Nodo *&fin, int valor);
int Desencolar(Nodo *&frente, Nodo *&fin);

int main()
{
    int valorAEncolar;

    Nodo *frente = NULL; // Inicialización del frente de la cola como vacío
    Nodo *final = NULL;  // Inicialización del final de la cola como vacío

    do
    {
        cout << "Ingrese el valor a agregar en la cola (o 0 para salir): ";
        cin >> valorAEncolar;
        if (valorAEncolar != 0)
        {
            Encolar(frente, final, valorAEncolar);
        }
    } while (valorAEncolar != 0);

    while (frente != NULL)
    {
        int desencolando = Desencolar(frente, final);

        if (desencolando != -1)
        { // Si la cola no está vacía
            cout << "Desencolando... " << desencolando << endl;
        }
    }

    return 0;
}

void Encolar(Nodo *&frente, Nodo *&fin, int valor)
{
    Nodo *nuevoNodo = new Nodo(); // Se crea un nuevo nodo
    nuevoNodo->dato = valor;      // Se asigna el valor al nodo
    nuevoNodo->siguiente = NULL;  // El nuevo nodo será el último, su siguiente es NULL

    if (frente == NULL) // Si la cola estaba vacía, el nuevo nodo es también el frente
    {
        frente = nuevoNodo;
    }
    else
    {
        fin->siguiente = nuevoNodo;
    }
    fin = nuevoNodo; // Porque el nuevo elemento siempre estará al final de la cola
}

int Desencolar(Nodo *&frente, Nodo *&fin)
{
    if (frente != NULL) // Verifica si la cola no está vacía
    {
        int auxiliarDato;
        Nodo *nodoAuxiliar = frente;
        auxiliarDato = nodoAuxiliar->dato; // Obtener el dato del primer nodo

        frente = frente->siguiente; // Avanzar el frente al siguiente nodo

        if (frente == NULL) // Si la cola ha quedado vacía, también actualiza el fin
        {
            fin = NULL;
        }

        delete nodoAuxiliar; // Liberar la memoria del nodo desencolado
        return auxiliarDato;
    }
    else
    {
        cout << "La cola está vacía. No se puede desencolar." << endl;
        return -1; // Retorna un valor para indicar que no se desencoló ningún dato
    }
}