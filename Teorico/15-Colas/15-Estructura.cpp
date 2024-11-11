#include <iostream>
using namespace std;

int main()
{
    /* Una cola es una estructura de datos que sigue el principio FIFO (First In, First Out),
       lo que significa que el primer elemento en entrar es el primero en salir.
       Las colas se pueden implementar usando arreglos o listas enlazadas. A continuación,
       se explica cómo usar una cola basada en una lista enlazada.

       - Los elementos se añaden en un extremo (final).
       - Los elementos se eliminan del otro extremo (frente).
    */

    // Estructura para un nodo de la cola
    struct Nodo
    {
        int dato;        // Dato que almacena el nodo
        Nodo *siguiente; // Puntero al siguiente nodo
    };

    Nodo *frente = NULL; // Inicialización del frente de la cola como vacío
    Nodo *final = NULL;  // Inicialización del final de la cola como vacío

    // 1️⃣ Función para encolar (añadir) un elemento
    void Encolar(Nodo * &frente, Nodo * &fin, int valor);

    void Encolar(Nodo * &frente, Nodo * &fin, int valor)
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

    // 2️⃣ Función para desencolar (quitar) un elemento
    int Desencolar(Nodo * &frente, Nodo * &fin);

    int Desencolar(Nodo * &frente, Nodo * &fin)
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

    // 3️⃣ Función para mostrar la cola (Idealmente, la cola NO se recorre!)
    void MostrarCola(Nodo *frente);

    void MostrarCola(Nodo *frente)
    {
        cout << "Contenido de la cola: ";
        while (frente != NULL)
        {
            cout << frente->dato << " "; // Muestra el dato del nodo actual
            frente = frente->siguiente;  // Avanza al siguiente nodo
        }
        cout << endl;
    }

    return 0;
}