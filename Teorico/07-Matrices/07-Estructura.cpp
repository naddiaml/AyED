#include <iostream>
using namespace std;

int main()
{
    /* Una matriz o array multidimensional es una colección ordenada e indexada de elementos con las siguientes características:
        - Todos los elementos son del mismo tipo (por eso se dice que es una estructura homogénea)
        - La memoria ocupada a lo largo de la ejecución del programa es fija y ocupa posiciones de memoria consecutivas (lo que los hace una estructura estática)
        - Es una estructura indexada, por lo que los elementos pueden recuperarse en cualquier orden indicando su posición, con el operador de acceso [] y usando múltiples índices (uno para cada dimensión).
    */

    // Definición de la matriz: TipoDeDato NombreMatriz [cantidadDeFilas][cantidadDeColumnas]
    // Al igual que los arrays unidimensionales, las matrices también requieren un "len" para indicar la cantidad de posiciones que están realmente ocupadas.

    /* Para trabajar con matrices:
        1️⃣ Se define la matriz → tipoDeDato nombre [cantDeFilas][cantDeColumnas]
        2️⃣ Se inicializa la matriz
            → Con un for anidado se recorre la matriz fila por fila y columna por columna, y se establece que matriz[i][j] = valorInicialización
        3️⃣ Carga la matriz (puede ser por carga masiva, en una posición específica, etc.).
        4️⃣ Procesar
        5️⃣ Mostrar
            → Con un for anidado se recorre la matriz y se muestra el valor almacenado en cada posición.
    */

    // 1️⃣ Definir la matriz → tipoDeDato nombre [cantidadDeFilas][cantidadDeColumnas]
    int matriz[3][3];

    // 2️⃣ Inicializar la matriz
    // Inicializamos todos los elementos de la matriz a un valor predeterminado (por ejemplo, 0)
    void InicializarMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas, int valorAInicializar);

    void InicializarMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas, int valorAInicializar)
    {
        cout << "Inicializando la matriz... " << endl;
        for (int i = 0; i < cantidadDeFilas; i++)
        {
            for (int j = 0; j < cantidadDeColumnas; j++)
            {
                matriz[i][j] = valorAInicializar;
            }
        }
    }

    // Inicializa la matriz con el valor 0
    InicializarMatriz(matriz, 3, 3, 0);

    // 3️⃣ Cargar la matriz
    // Carga masiva de la matriz
    void CargarMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas);

    void CargarMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas)
    {
        for (int i = 0; i < cantidadDeFilas; i++)
        {
            // Por cada fila (i), recorre cada una de las columnas (j)
            for (int j = 0; j < cantidadDeColumnas; j++)
            {
                cout << "Ingrese el valor a guardar en la posicion [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matriz[i][j];
            };
        };
    };
    // Carga la matriz por filas y columnas
    CargarMatriz(matriz, 3, 3);

    // 4️⃣ Procesar
    // Búsqueda en la matriz
    int BuscarEnMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas, int valorABuscar);

    int BuscarEnMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas, int valorABuscar)
    {
        for (int i = 0; i < cantidadDeFilas; i++)
        {
            for (int j = 0; j < cantidadDeColumnas; j++)
            {
                if (matriz[i][j] == valorABuscar)
                {
                    return i * cantidadDeColumnas + j; // Devuelve la posición como un índice lineal
                }
            }
        }
        return -1; // Si no se encuentra el valor, devuelve -1
    }

    // Muestra los resultados de la búsqueda
    void ImpresionBusqueda(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas, int valorABuscar);

    void ImpresionBusqueda(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas, int valorABuscar)
    {
        int busqueda = BuscarEnMatriz(matriz, cantidadDeFilas, cantidadDeColumnas, valorABuscar);
        if (busqueda == -1)
        {
            cout << "Valor no encontrado." << endl;
        }
        else
        {
            cout << "Valor encontrado en la posición: " << busqueda << endl;
        }
    }

    // Para mostrar los elementos de la diagonal principal:
    void DiagonalPrincipalMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas);

    void DiagonalPrincipalMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas)
    {
        cout << "Elementos de la diagonal principal:" for (int i = 0; i < cantidadDeFilas; i++)
        {
            for (int j = 0; j < cantidadDeColumnas; j++)
            {
                if (i == j)
                {
                    cout << matriz[i][j] << " ";
                }
            }
        }
    }

    // Copiar en otra matriz su traspuesta:
    void MatrizTraspuesta(int matriz[][3], int matriz2[][3], int cantidadDeFilas, int cantidadDeColumnas);

    void MatrizTraspuesta(int matriz[][3], int matriz2[][3], int cantidadDeFilas, int cantidadDeColumnas)
    {
        for (int i = 0; i < cantidadDeFilas; i++)
        {
            for (int j = 0; j < cantidadDeColumnas; j++)
            {
                matriz2[i][j] = matriz[j][i];
            }
        }
    }

    // 5️⃣ Mostrar la matriz
    // Muestra la matriz
    void MostrarMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas);

    void MostrarMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas)
    {
        for (int i = 0; i < cantidadDeFilas; i++)
        {
            for (int j = 0; j < cantidadDeColumnas; j++)
            {
                cout << matriz[i][j] << " ";
            }
            cout << endl; // Nueva línea después de cada fila
        }
    }

    // Mostrar la matriz después de cargar los valores
    MostrarMatriz(matriz, 3, 3);

    return 0;
}
