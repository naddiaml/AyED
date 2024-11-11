/* Todos los programas funcionan con valores que deben poder guardarse en algún lugar para luego ser usados en otro momento. Las variables son espacios de memoria reservadas en los que se almacenarán estos valores bajo un nombre de referencia (también llamado identificadores), para que cuando se quiera hacer uso de algún valor en específico, sólo tengamos que referirnos a él de este modo, y el programa buscará en la memoria a dicho identificador y operará con el valor asociado. */

/* En este lenguaje (fuertemente tipado), cada variable debe especificar cual será el tipo de dato contendrá, el cual podría ser un texto, un número (entero O uno decimal), un valor booleano, entre otros. A cada uno de estos 'tipos de valores' se los conoce como tipos de datos.*/

#include <iostream>
using namespace std;

int main()
{

    // Sintaxis de las variables: [tipoDeDato] [identificador] = [valor];
    
    // ❗ Los identificadores pueden estar compuestos por letras (mayúsculas y/0 minúsculas), dígitos y guiones bajos (_). No se permiten otros caracteres especiales como símbolos de puntuación o espacios en blanco. Del mismo modo, deben comenzar con una letra o un guion bajo, y no pueden comenzar con un dígito. ❗❗ C++ es un lenguaje case sensitive, es decir, distingue entre mayúsculas y minúsculas, por lo cual una variable "nombre" ≠ de otra "Nombre".

    // Tipos de datos
    int;
    float; // Almacena números con decimales.
    char;  // Almacena un único carácter. Ocupa 1 byte.
    bool;  // Retrotna un valor booleano según corresponda
    void;  // Se utiliza para procedimientos.
    // ❗ Como C++ no tiene un tipo de dato primitivo como string, podemos "formar uno" de la siguiente manera: char identificadir[nPosicionesAGuardar]. Un ejemplo sería:
    char nombre[10];

    // Declaración de variables:
    int numeroEntero; // Declara una variable llamada "numeroEntero" que guardará un número entero. ❗ No se le asigna ningún valor, por tanto se dice que la variable no está inicializada

    // Cuando en esta sintaxis no está presente el signo igual ( = ), llamado operador de asignación, se dice que la variable está declarada pero que no está inicializada, pues no tiene aún ningún valor asignado.

    return 0;
}