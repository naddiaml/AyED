#include <iostream>
using namespace std;

int main()
{
    /* Una estructura o registro es una colección de uno o más tipos de elementos, llamados campos. Cada campo puede ser de tipo distinto a los otros.
     */

    // Definición de la estructura: struct nombreDelRegistro {tipoDeDatoCampo identificadorCampo; tipoDeDatoCampo2 identificadorCampo2}
    // Las estructuras o registros funcionan, practicamente, como nuevos tipos de datos.

    // 📌 Declaración de una estructura/registro
    struct Alumno
    {
        int legajo;
        char nombre[50];
        int nota1Parcial;
        int nota2Parcial;
    };

    Alumno Nadia;
    // Para cargar el registro o estructura, debemos hacerlo campo a campo:
    Nadia.legajo = 1234;
    Nadia.nombre = "Nadia Mlinarevic";
    Nadia.nota1Parcial = 8;
    Nadia.nota2Parcial = 8;

    // 📌 Estructuras anidadas
    // Las estructuras o registros también pueden estar anidados, uno dentro de otros. Supongamos que tenemos dos estructuras: Alumno y Notas:
    struct Notas
    {
        int Nota1Parcial;
        int Nota2Parcial;
    };

    struct Alumno
    {
        int legajo;
        char nombre[50];
        struct Notas;
    };

    Alumno Nadia;
    Nadia.legajo = 1234;
    Nadia.nombre = "Nadia Mlinarevic";
    Nadia.nota1Parcial = 8;
    Nadia.nota2Parcial = 8;

    // 📌 Si quiero cargar un array de registros, puedo hacerlo:
    struct Alumno
    {
        int legajo;
        char nombre[50];
        struct Notas;
    } alumnos[10]; // El compilador interpreta automáticamente que es un array de 10 elementos que almacenará registros de alumnos.

    return 0;
}