#include <iostream>
using namespace std;

int main()
{
    /* Una lista enlazada es una estructura de datos compuesta por nodos,
       donde cada nodo contiene un dato y un puntero al siguiente nodo.
       Las listas enlazadas permiten la inserción y eliminación eficiente de elementos.

       - Cada nodo puede ser agregado o eliminado de manera dinámica.
       - No es necesario definir un tamaño fijo como en los arreglos.
    */

    // Estructura para un nodo de la lista
    struct Nodo
    {
        int dato;        // Dato que almacena el nodo
        Nodo *siguiente; // Puntero al siguiente nodo
    };

    Nodo *Lista = NULL; // Inicialización de la cabeza de la lista como vacío

    // 1️⃣ Función para agregar un elemento al principio de la lista
    void AgregarPrimero(Nodo * &Lista, int valorAAgregar);

    void AgregarPrimero(Nodo * &Lista, int valorAAgregar)
    {
        Nodo *nuevoNodo = new Nodo();
        nuevoNodo->dato = valorAAgregar; // Se carga el nodo
        nuevoNodo->siguiente = Lista;
        Lista = nuevoNodo;
    }

    // Inserta un nuevo elemento a la lista según algún criterio de ordenamiento.
    void InsertarOrdenado(Nodo * &Lista, int valorAInsertar);

    void InsertarOrdenado(Nodo * &Lista, int valorAInsertar)
    {
        Nodo *nuevoNodo = new Nodo();

        nuevoNodo->dato = valorAInsertar; // Se carga un nuevo nodo (de tipo auxiliar) con el valor que hay que insetar
        nuevoNodo->siguiente = NULL;      // Como aún no se sabe dónde tiene que ubicarse en la lista, establecemos provisoriamente el siguiente nodo en null.

        Nodo *nodoAuxiliar = Lista; // Como pasamos la lista por referencia, se recorrerá haciendo uso de un auxiliar

        Nodo *nodoAnterior = NULL; // Este nodo va a permitir enlazar el nuevo nodo con su respectivo anterior en la lista ya ordenada.

        while ((nodoAuxiliar != NULL) && (nodoAuxiliar->dato < valorAInsertar)) // Dependiendo del orden que se le quiera dar a la lista (en este caso, de menor a mayor) ↓
        {
            nodoAnterior = nodoAuxiliar;
            nodoAuxiliar = nodoAuxiliar->siguiente;
        } // Si salgo del while es porque la lista está vacía o porque ya se encontró el lugar donde hay que insertar el nuevo elemento
        if (nodoAnterior == NULL) // Si la lista está vacía o hay que insertar al principio.
        {
            Lista = nuevoNodo;
        }
        else
        { // Hay que agregar en alguna parte de la lista en específico o al final
            nodoAnterior->siguiente = nuevo;
        }
        nuevoNodo->siguiente = nodoAuxiliar; // En caso de que haya que agregar al final, el auxiliar no será ni más ni menos que un nulo, pero hay que agregar esta línea.
    };

    // 2️⃣ Función para eliminar el primer elemento de la lista
    int EliminarPrimero(Nodo * &Lista);

    int EliminarPrimero(Nodo * &Lista)
    {
        int auxiliarDato;
        auxiliarDato = Lista->dato;
        Nodo *nodoAuxiliar = Lista;
        Lista = nodoAuxiliar->siguiente;
        delete (NodoAuxiliar);
        return auxiliarDato;
    }

    // Buscar en la lista
    Nodo *buscar(Nodo * Lista, int valorABuscar);

    Nodo *buscar(Nodo * Lista, int valorABuscar)
    {
        Nodo *nodoAuxiliar = Lista;
        while ((nodoAuxiliar != NULL) && (nodoAuxiliar->dato != valorABuscar))
        {
            nodoAuxiliar = nodoAuxiliar->siguiente;
        }
        return nodoAuxiliar;
    }

    // Imprimir resultados de la búsqueda
    void ResultadosBusqueda(Nodo * lista, int valorABuscar)
    {
        if (buscar(Lista, valorABuscar) != NULL)
        {
            cout << "El elemento fue hallado en la lista." << endl;
        }
        else
        {
            cout << "El element NO fue hallado en la lista." << endl;
        }
    }

    // Mostrar lista
    void MostrarLista(Nodo * lista)
    {
        Nodo *nodoAuxiliar = Lista;
        while (nodoAuxiliar != NULL)
        {
            cout << nodoAuxiliar->dato;
            nodoAuxiliar = NodoAuxiliar->siguiente;
        }
    }

    // Liberar memoria
    void BorrarTodos(Nodo * &Lista);
    void BorrarTodos(Nodo * &Lista)
    {
        Nodo *nodoAuxiliar;
        while (Lista != = NULL)
        {
            nodoAuxiliar = Lista;
            Lista = Lista->Siguiente;
            delete (nodoAuxiliar);
        }
    }

    return 0;
}