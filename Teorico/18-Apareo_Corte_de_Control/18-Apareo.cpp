#include <iostream>
#include <stdio.h> // ❗❗ Sí o si hay que agregar esta librería
using namespace std;

int main()
{
    /* El Apareo permite, partiendo de dos o más archivos que cumplan ciertas condiciones, la creación de un archivo adicional que integre el contenido de los anteriores.
        → Supongamos que se tiene un archivo A que tiene la información de los aprobados del primer parcial, y un archivo B que contiene la información de los aprobados en el segundo parcial. Si estos archivos cumplen las condiciones, se podría crear otro nuevo que contenga la información de los que de ambos parciales.
    */

    /* Precondiciones que permiten aplicar Apareo:
        • Los archivos A y B deben existir previamente y tener el mismo tipo de dato, y ordenados por la misma clave de ordenamiento.
            → Supongamos que el archivo A se ordena por numero de legajo, tanto B como el archivo C a crear deben ordenarsr con ese criterio.
    */

    struct Alum
    {
        int legajo;
        int dni;
        int Nota1;
        int Nota2;
    };

    FILE *A;
    FILE *B;
    FILE *C;

    A = fopen("ArchivoA.dat", "rb");
    B = fopen("ArchivoB.dat", "rb");
    C = fopen("ArchivoC.dat", "wb");

    Alum registroAux1;
    Alum registroAux2;

    fread(&registroAux1, sizeof(struct Alum), 1, A);
    fread(&registroAux2, sizeof(struct Alum), 1, B);

    while ((!feof(A)) && (!feof(B))) // Este bucle continúa hasta que uno de los dos archivos se termine. Es después de cada registro en C que el programa lee (con el fread) el siguiente registro en cada archivo
    {
        if (registroAux1.legajo < registroAux2.legajo) // Como A y B están ordenados por legajo, evalúa: ¿Es el legajo leído desde el archivo A menor que el leído desde el archivo B?
        {
            fwrite(&registroAux1, sizeof(struct Alum), 1, C); // Como el legajo leído desde el archivo A es menor, escribe el elemento con el menor legajo (El de A)
            fread(&registroAux1, sizeof(struct Alum), 1, A);  // Vuelve a leer inmediatamente
        }
        else
        {
            fwrite(&registroAux2, sizeof(struct Alum), 1, C); // Como el legajo leído desde el archivo B es menor, escribe el elemento con el menor legajo (El de B)
            fread(&registroAux2, sizeof(struct Alum), 1, B);  // Vuelve a leer inmediatamente
        }
    }

    // Estos bucles sólo se ejecutan si alguno de los archivos aún tiene registros cuando uno de los dos ya se cargó completamente, hasta que lleguen al final.
    while (!feof(A))
    {
        fwrite(&registroAux1, sizeof(struct Alum), 1, C);
        fread(&registroAux1, sizeof(struct Alum), 1, A);
    }
    while (!feof(B))
    {
        fwrite(&registroAux2, sizeof(struct Alum), 1, C);
        fread(&registroAux2, sizeof(struct Alum), 1, B);
    }

    return 0;
}