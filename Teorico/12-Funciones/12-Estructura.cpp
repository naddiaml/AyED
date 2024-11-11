#include <iostream>
using namespace std;

int main()
{
    /* Las funciones son bloques de código que realizan tareas específicas, y pueden ser reutilizadas.
       Tienen las siguientes características:
       - Pueden recibir parámetros de entrada.
       - Pueden devolver un valor al lugar donde fueron llamadas.
       - Pueden ser definidas para realizar distintas operaciones sobre diferentes tipos de datos.
    */

    // Definición de la función: TipoDeDato NombreFuncion(Parametros) { Código a ejectutar}

    // 1️⃣ Definición de una función para sumar dos números
    int Sumar(int a, int b)
    {
        return a + b;
    };

    // 2️⃣ Definición de una función para restar dos números
    int Restar(int a, int b)
    {
        return a - b;
    };

    // 3️⃣ Definición de una función para multiplicar dos números
    int Multiplicar(int a, int b)
    {
        return a * b;
    };

    // 4️⃣ Definición de una función para dividir dos números
    float Dividir(int a, int b)
    {
        if (b == 0)
        {
            cout << "Error: División por cero." << endl;
            return 0.0f; // Retorna 0 en caso de división por cero
        }
        return static_cast<float>(a) / b; // Conversión a float
    };

    // 5️⃣ Función para mostrar los resultados de las operaciones
    void MostrarResultados(int a, int b)
    {
        cout << "Sumar: " << Sumar(a, b) << endl;
        cout << "Restar: " << Restar(a, b) << endl;
        cout << "Multiplicar: " << Multiplicar(a, b) << endl;
        cout << "Dividir: " << Dividir(a, b) << endl;
    };

    // Entrada de datos
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Procesar y mostrar resultados
    MostrarResultados(num1, num2);

    return 0;
}