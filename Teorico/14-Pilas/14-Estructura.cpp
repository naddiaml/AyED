#include <iostream>
using namespace std;

int main()
{
    /* Una pila es una estructura de datos que sigue el principio LIFO (Last In, First Out), lo que significa que el último elemento en entrar es el primero en salir.
       Las pilas se pueden implementar usando arreglos o listas enlazadas.
       - Los elementos se apilan en un extremo (cima).
       - Los elementos se eliminan del mismo extremo (cima).
    */

    // Estructura para un nodo de la pila
    struct Nodo
    {
        int dato;        // Dato que almacena el nodo (pueden ser estructuras)
        Nodo *siguiente; // Puntero al siguiente nodo
    };

    Nodo *pila = NULL; // Inicialización de la pila como vacía

    // 1️⃣ Función para apilar (push) un elemento
    void AgregarALaPila(Nodo * &pila, int n);

    void AgregarALaPila(Nodo * &pila, int n)
    {
        Nodo *nuevoNodo = new Nodo(); // Se crea un nuevo nodo, se pide memoria
        nuevoNodo->dato = n;          // Se asigna el valor al nodo
        nuevoNodo->siguiente = pila;  // Se enlaza el nuevo nodo al anterior, de modo que este nuevo elemento esté conectado a la pila mediante el elemento anterior al último.
        pila = nuevoNodo;             // Se actualiza la cima de la pila. Pila es un puntero que puede conocer direcciones de memoria, entonces, le asignamos a pila el contenido del nodo.
    }

    // 2️⃣ Función para desapilar (pop) un elemento
    int SacarDeLaPila(Nodo * &pila, int &n);

    int SacarDeLaPila(Nodo * &pila, int &n)
    {
        if (pila != NULL) // Verifica si la pila no está vacía
        {
            int elementoAux;
            elementoAux = pila->n;  // Tengo que guardar en una variable auxiliar el valor previamente almacenado en la cima de la pila.
            Nodo *nodoAux = pila;   // En un nuevo nodo auxiliar, guardamos la pila en el estado actual (teniendo en la cima de ella el elemento a eliminar).
            pila = pila->siguiente; // Actualizamos el valor de la cima de la pila al siguiente nodo, es decir, al próximo elemento a eliminar.
            delete (nodoAux);       // Borramos el elemento en la cima de la pila
            return elementoAux;     // Para saber cuál fue el elemento eliminado.
        }
        else
        {
            cout << "La pila está vacía. No se puede desapilar." << endl;
        }
    }

    // 3️⃣ Función para mostrar la pila (Idealmente, la pila NO se recorre!)
    void MostrarPila(Nodo *pila);

    void MostrarPila(Nodo *pila)
    {
        cout << "Contenido de la pila: ";
        while (pila != NULL)
        {
            cout << pila->dato << " "; // Muestra el dato del nodo actual
            pila = pila->siguiente;    // Avanza al siguiente nodo
        }
        cout << endl;
    }

    return 0;
}
