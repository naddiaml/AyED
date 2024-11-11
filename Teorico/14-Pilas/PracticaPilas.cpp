#include <iostream>
using namespace std;

struct Nodo
{
    int dato;        // Dato que almacena el nodo (pueden ser estructuras)
    Nodo *siguiente; // Puntero al siguiente nodo
};

void AgregarALaPila(Nodo *&pila, int dato);

int SacarDeLaPila(Nodo *&pila);

int main()
{
    int valorACargar;
    Nodo *pila = NULL; // Inicialización de la pila como vacía

    do
    {
        cout << "Ingrese el valor a agregar a la pila (0 si quiere salir): ";
        cin >> valorACargar;

        AgregarALaPila(pila, valorACargar);
    } while (valorACargar != 0);

    while (pila != NULL)
    {
        int eliminandoElementos = SacarDeLaPila(pila);
        cout << "Elemento eliminado: " << eliminandoElementos << endl;
    };

    return 0;
}

void AgregarALaPila(Nodo *&pila, int dato)
{
    Nodo *nuevoNodo = new Nodo(); // Se crea un nuevo nodo, se pide memoria
    nuevoNodo->dato = dato;       // Se asigna el valor al nodo
    nuevoNodo->siguiente = pila;  // Se enlaza el nuevo nodo al anterior, de modo que este nuevo elemento esté conectado a la pila mediante el elemento anterior al último.
    pila = nuevoNodo;             // Se actualiza la cima de la pila. Pila es un puntero que puede conocer direcciones de memoria, entonces, le asignamos a pila el contenido del nodo.
}

int SacarDeLaPila(Nodo *&pila)
{
    if (pila != NULL) // Verifica si la pila no está vacía
    {
        int elementoAux;
        elementoAux = pila->dato; // Tengo que guardar en una variable auxiliar el valor previamente almacenado en la cima de la pila.
        Nodo *nodoAux = pila;     // En un nuevo nodo auxiliar, guardamos la pila en el estado actual (teniendo en la cima de ella el elemento a eliminar).
        pila = pila->siguiente;   // Actualizamos el valor de la cima de la pila al siguiente nodo, es decir, al próximo elemento a eliminar.
        delete (nodoAux);         // Borramos el elemento en la cima de la pila
        return elementoAux;       // Para saber cuál fue el elemento eliminado.
    }
    else
    {
        cout << "La pila está vacía. No se puede desapilar." << endl;
    }
}