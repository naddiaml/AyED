#include <iostream>
#include <stdio.h> // ❗❗ Sí o si hay que agregar esta librería
using namespace std;

int main()
{
    /* El corte de control se aplica en archivos que estén ordenados y tengan esa clave repetida, y siempre y cuando el procesamiento que haya que hacer se relacione con esa clave.
        → Supongamos que se tiene un archivo que almacena todas las notas de todos los alumnos (con distintos legajos), teniendo una estructura por cada legajo, con sus respectivas notas. El legajo del alumno se repetirá varias veces en el archivo, una por cada materia, de modo que esa clave de control se repite
    */

    /* Precondiciones que permiten aplicar Apareo:
        • Archivo A debe existir previamente y estar ordenado por una clave de control repetida.
    */

    struct multa
    {
        int dominio;
        int tipo;
        int imp;
    };
    
    FILE *punteroMultas;
    punteroMultas = fopen("multas.dat", "rb");

    multa registroAux;
    int dominioAnterior, sumaMultas = 0, contadorMultas = 0;

    fread(&registroAux, sizeof(struct multa), 1, punteroMultas);

    while (!feof(punteroMultas))
    { // Mientras no estemos en el final del archivo
        dominioAnterior = registroAux.dominio;
        sumaMultas = 0;     // Reiniciar la suma para cada dominio
        contadorMultas = 0; // Reiniciar el contador para cada dominio

        while ((!feof(punteroMultas)) && (dominioAnterior == registroAux.dominio))
        {
            sumaMultas = sumaMultas + registroAux.imp; // Sumar el importe de la multa
            contadorMultas++;                          // Contar la multa
            fread(&registroAux, sizeof(struct multa), 1, punteroMultas);
        }

        // Imprimir el total de importes y la cantidad de multas
        cout << "Dominio " << dominioAnterior
             << " tiene un total de " << sumaMultas
             << " de importes por " << contadorMultas
             << " multas." << endl;
    }

    fclose(punteroMultas);
    return 0;
}