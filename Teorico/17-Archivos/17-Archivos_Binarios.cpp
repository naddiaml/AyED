#include <iostream>
#include <stdio.h> // ❗❗ Sí o si hay que agregar esta librería
using namespace std;

int main()
{
    // Llamamos archivo a todo conjunto de datos almacenado en un dispositivo de almacenamiento secundario (no en memoria principal).

    // La información contenida en un archivo puede ser o no homogénea, es decir que un archivo puede contener un conjunto de valores integer, un conjunto de valores de cadena de caracteres, un conjunto de registros de alumnos (RAlumno), etc.

    // En este capítulo se estudian archivos homogéneos, principalmente archivos de registros.

    /* Para trabajar con archivos:
            1️⃣ Se define el puntero al archivo para poder recorrerlo → FILE*nombrePuntero;
                → FILE es el tipo de puntero.
            2️⃣ Se abre el archivo → nombrePuntero = fopen("nombreArchivo.dat", "modoDeApertura")
                → Existen distintos modos de apertura:
                    • rb → Lectura
                    • wb → Escritura
                    • rb+ → Primero lee, luego escribe
                    • wb+ → Primero escribe, luego lee
            3️⃣ Leer el archivo
                → Hay que realizar una primera lectura con fread, y luego, para leer el resto de los registros, se puede hacer en un ciclo while que se cumpla siempre y cuando no sea el final del archivo o EOF.
                → fread(&direccionRegistroAuxiliar, sizeof(tipoDeDato), cantidadDeBloques, puntero FILE*)
                → Para leer el archivo:
                    while (!feof(FILE*)) {
                        // Procesamiento

                        fread(&regAuxiliar, sizeof(...), 1, FILE*);
                    }
            4️⃣ Procesar
            5️⃣ Cerrar el archivo → fclose(FILE*)
                → Inmediatamente después de utilizado el archivo, se debe cerrar haciendo uso de la función fclose
        */

    // ------------------------------------------------- Escritura de archivos

    struct Alumno
    {
        int legajo;
        int dni;
        int nota1;
        int nota2;
    };

    FILE *punteroAlumno; // Se cea el puntero al archivo

    punteroAlumno = fopen("nombreArchivo.dat", "wb"); // Se hace la solicitud para ESCRIBIR el archivo

    Alumno registroAux; // Se crea un registro auxiliar para leer y procesar cada registro del archivo

    cout << "Ingrese un numero de legajo, o 0 para terminar: ";
    cin >> registroAux.legajo;

    while (registroAux.legajo > 0)
    {
        cout << "Ingrese el DNI del alumno: ";
        cin >> registroAux.dni;
        cout << "Ingrese la nota del primer parcial: ";
        cin >> registroAux.nota1;
        cout << "Ingrese la nota del segundo parcial: ";
        cin >> registroAux.nota2;

        fwrite(&registroAux, sizeof(struct Alumno), 1, punteroAlumno);

        cout << "Ingrese un numero de legajo, o 0 para terminar: ";
        cin >> registroAux.legajo;
    }

    fclose(punteroAlumno);

    // ------------------------------------------------- Lectura de archivos

    /* struct Alumno
    {
        int legajo;
        int dni;
        int nota1;
        int nota2;
    }; */

    // FILE *punteroAlumno; // Se cea el puntero al archivo

    punteroAlumno = fopen("nombreArchivo.dat", "rb"); // Se hace la solicitud para abrir el archivo

    // Alumno registroAux; // Se crea un registro auxiliar para leer y procesar cada registro del archivo

    int sumatoria = 0;

    fread(&registroAux, sizeof(struct Alumno), 1, punteroAlumno); // Primera lectura

    while (!feof(punteroAlumno)) // Mientras no sea final de archivo proceso y leo
    {
        // En este punto, el registro auxiliar, contiene los datos del registro que ACABA de leer.

        // Procesamiento ...
        sumatoria = sumatoria + registroAux.nota1; // Supongamos que se quiere leer la suma de todas las notas del primer parcial cargadas en el archivo

        fread(&registroAux, sizeof(struct Alumno), 1, punteroAlumno);
    }
    fclose(punteroAlumno);
    cout << "La sumatoria del primer parcial es: " << sumatoria << endl;

    return 0;
}