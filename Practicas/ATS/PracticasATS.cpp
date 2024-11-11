/* 📌 1. Escribe un programa que lea de la entrada esándar dos números y muestr en la salia estándar su suma, resta, multiplicación y división
#include <iostream>
using namespace std;

int main()
{
    int primerNumero, suma, resta, multiplicacion;
    float segundoNumero, division;

    cout << "Por favor, ingresa dos numeros" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo numero: ";
    cin >> segundoNumero;

    suma = primerNumero + segundoNumero;
    cout << "La suma de ambos numeros es: " << suma << endl;

    resta = primerNumero - segundoNumero;
    cout << "La resta de ambos numeros es: " << resta << endl;

    multiplicacion = primerNumero * segundoNumero;
    cout << "La multiplicacion de ambos numeros es: " << multiplicacion << endl;

    division = primerNumero / segundoNumero;
    cout << "La division de ambos numeros es: " << division << endl;
return 0;
}
*/

/* 📌 2. Escribe un programa que lea dde la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA
#include <iostream>
using namespace std;

int main () {
    float precioProducto, precioIva;
    cout << "Por favor, ingrese el precio del producto: ";
    cin >> precioProducto;

    precioIva = precioProducto * 1.21;
    cout << "El precio del producto ingresado es: " << precioProducto << endl;
    cout << "Precio + IVA: " << precioIva << endl;

    return 0;
}
*/

/* 📌 3. Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
    Edad (tipo de dato entero)
    Sexo (tipo de dato carácter)
    Altura en metros (tipo de dato float)
Tras leer los datos, el programa debe mostrarlos en la salida estándar.
#include <iostream>
using namespace std;

int main () {
    int edad;
    // char sexo;
    char sexo[10];
    float altura;

    cout << "Por favor, ingrese su edad: ";
    cin >> edad;

    // cout << "Por favor, ingrese su sexo (F o M): ";
    cout << "Por favor, ingrese su sexo: (Femenino o masculino): ";
    cin >> sexo;

    cout << "Por favor, infgrese su altura en metros: ";
    cin >> altura;

    cout << "Los datos ingresados son: " << endl << "Edad: " << edad << endl << "Sexo: " << sexo << endl << "Altura: " << altura;

    return 0;
}*/

/* 📌 4. Escribe la siguiente expresión en C++  [(a/b)+1]
#include <iostream>
using namespace std;

int main () {

    float a, b, operacion;

    cout << "Ingrese el primer valor: ";
    cin >> a;

    cout << "Ingrese el segundo valor: ";
    cin >> b;

    operacion = (a/b) + 1;

    cout << "El resultado es: " << operacion << endl;

    // ❗ Supongamos que se ingresan valores con muchos decimales. precision() permite acotar la cantidad de decimales. Si buscas una precision de 2, tomará 2 decimales y los redondeará a uno.
    cout.precision(3);
    cout << "El resultado (acotando la cantidad de decimales) es: " << operacion << endl;

    return 0;
};
*/

/* 📌 5. Escribe la siguiente expresión matemática como expresión en C++: [(a+b)/(c+d)]
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, resultado;
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    cout << "Ingrese el valor de d: ";
    cin >> d;

    resultado = (a + b) / (c + d);
    cout.precision(2);

    cout << "El resultado es: " << resultado << endl;
    return 0;
}*/

/* 📌 6.  Escribe la siguiente expresión matemática como expresión en C++: [(a+(b/c))/(d+(e/f))]
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f, resultado;
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    cout << "Ingrese el valor de d: ";
    cin >> d;

    cout << "Ingrese el valor de e: ";
    cin >> e;

    cout << "Ingrese el valor de f: ";
    cin >> f;

    resultado = (a+(b/c)) / (d+(e/f));
    cout.precision(2);

    cout << "El resultado es: " << resultado << endl;
    return 0;
}*/

/* 📌 7. Escriba la siguiente expresión como expresión en C++: [a+(b/(c-d))]
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, resultado;
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    cout << "Ingrese el valor de d: ";
    cin >> d;

    resultado = a + (b/(c-d));
    cout.precision(2);

    cout << "El resultado es: " << resultado << endl;
    return 0;
}*/

/* 📌 8. Escriba un fragmento de programa que intercambie los valores de dos variables.
#include <iostream>
using namespace std;

int main() {
    int var1, var2, auxiliar;
    cout << "Ingrese el valor de la primera variable: ";
    cin >> var1;

    cout << "Ingrese el valor de la segunda variable: ";
    cin >> var2;

    cout << "En este punto: " << endl << "Primera variable: "<< var1 << endl << "Segunda variable: " << var2 << endl;

    auxiliar = var1; // Guardamos el valor de la primera variable en la variable auxiliar para guardar el valor provisoriamente.
    var1 = var2;
    var2 = auxiliar;

    cout << "Despues del intercambio: " << endl << "Primera variable: "<< var1 << endl << "Segunda variable: " << var2 << endl;

    return 0;
}*/

/* 📌 9. Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float notaAl1, notaAl2, notaAl3, notaAl4, notaFinalMedia;
    cout << "Ingrese la nota final del primer alumno: ";
    cin >> notaAl1;

    cout << "Ingrese la nota final del segundo alumno: ";
    cin >> notaAl2;

    cout << "Ingrese la nota final del tercer alumno: ";
    cin >> notaAl3;

    cout << "Ingrese la nota final del cuarto alumno: ";
    cin >> notaAl4;

    notaFinalMedia = ceil((notaAl1 + notaAl2 + notaAl3 + notaAl4) / 4);

    cout << "La nota final media de los 4 alumnos es: " << notaFinalMedia << endl;

    return 0;
} */

/* 📌 10. La calificación final de un estudiante es la media ponderada de tres notas:
    - La nota de prácticas que cuenta un 30% del total
    - La nota teórica que cuenta un 60%
    - La nota de participación que cuenta el 10% restante.
Escriba un programa que lea de la entrada estándar las tres notas del alumno y escriba en la salida estándar su nota final.
#include <iostream>
using namespace std;

int main()
{
    float notaPractica, notaTeorica, notaParticipacion, notaFinal;

    cout << "Ingrese la nota de practicas: ";
    cin >> notaPractica;
    notaPractica *= 0.3;

    cout << "Ingrese la nota teorica: ";
    cin >> notaTeorica;
    notaTeorica *= 0.6;

    cout << "Ingrese la nota de participacion: ";
    cin >> notaParticipacion;
    notaParticipacion *= 0.1;

    notaFinal = notaPractica + notaTeorica + notaParticipacion;

    cout << "Su nota final es: " << notaFinal;

    return 0;
}*/

/* 📌 11. Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int cateto1, cateto2, hipotenusa;

    cout << "Por favor, ingrese el tamano del primer cateto: ";
    cin >> cateto1;

    cout << "Por favor, ingrese el tamano del segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "El valor de la hipotenusa del triángulo es: " << hipotenusa << endl;

    return 0;
}*/

/* 📌 12. Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x e y: f(x,y) = (√x)/(y^2 - 1)
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float x, y, funcion;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    funcion = (sqrt(x))/(pow(y,2) - 1);
    cout << "El valor de la funcion es: f(" << x << ", " << y << ") = " << funcion << endl;

    return 0;
}*/

/* 📌 13. Realice un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta la fórmula resolvente.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, raiz1, raiz2;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    raiz1 = ((-b) + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
    raiz2 = ((-b) - (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);

    cout.precision(3);

    cout << "Para el polinomio de la forma: " << a << "x^2 + " << b << "x + " << c << ", sus raices son: " << raiz1 << " y " << raiz2 << endl;

    return 0;
} */

/* 📌 14.  Escriba un programa que lea dos números y determine cuál de ellos es el mayor
#include <iostream>
using namespace std;

int main () {
    int a, b;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    if (a>b) {
        cout << "a es mayor que b" << endl;
    } else {
        cout << "a es menor que b" << endl;
    };

    return 0;
} */

/* 📌 15. Escriba un programa que lea tres números y determine cuál de ellos es el mayor.
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Ingresa el valor de a: ";
    cin >> a;

    cout << "Ingresa el valor de b: ";
    cin >> b;

    cout << "Ingresa el valor de c: ";
    cin >> c;

    if ((a > b) && (a > c))
    {
        cout << "a es el mayor de los numeros: " << a << " > " << b << " y " << a << " > " << c;
    }
    else if ((b > a) && (b > c))
    {
        cout << "b es el mayor de los numeros: " << b << " > " << a << " y " << b << " > " << c;
    }
    else
    {
        cout << "c es el mayor de los numeros: " << c << " > " << a << " y " << c << " > " << b;
    };

    return 0;
} */

/* 📌 16. Realice un programa que lea un valor entero y determine si se trata de un número par o impar.
#include <iostream>
using namespace std;

int main()
{
    int a, mod;

    cout << "Ingrese un numero: ";
    cin >> a;

    mod = a % 2;

    if (mod == 0)
    {
        cout << "El numero es par.";
    }
    else
    {
        cout << "El numero es impar.";
    };

    return 0;
} */

/* 📌 17. Comprobar si un número digitado por el usuario es positivo o negativo.
#include <iostream>
using namespace std;

int main () {
    int a;

    cout << "Ingrese un numero: ";
    cin >> a;

    if (a > 0) {
        cout << "El numero es positivo.";
    } else {
        cout << "El numero es negativo.";
    }

    return 0;
}*/

/* 📌 18. Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal minúscula o no.
#include <iostream>
using namespace std;

int main()
{
    char caracter;

    cout << "Ingrese una letra: ";
    cin >> caracter;

    switch (caracter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "La letra ingresada es una vocal minuscula.";
        break;

    default:
        cout << "La letra ingresada no es una vocal minuscula.";
        break;
    }

    return 0;
}*/

/* 📌 19. Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal minúscula, es una vocal mayúscula o no es una vocal.
#include <iostream>
using namespace std;

int main()
{
    char caracter;

    cout << "Ingrese una letra: ";
    cin >> caracter;

    switch (caracter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "La letra ingresada es una voca minuscula.";
        break;

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "La letra ingresada es una vocal mayuscula.";
        break;

    default:
        cout << "La letra ingresada NO es una vocal.";
        break;
    };

    return 0;
} */

/* 📌 20. Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango [18-25].
#include <iostream>
using namespace std;

int main () {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if ((edad > 18) && (edad < 25)) {
        cout << "La edad esta en el rango establecido";
    } else {
        cout << "La edad no esta en el rango establecido.";
    }

    return 0;
} */

/* 📌 21. Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad.
#include <iostream>
using namespace std;

int main () {
    int primerNumero, segundoNumero, tercerNumero, cuartoNumero;

    cout << "Ingrese el primer numero: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo numero: ";
    cin >> segundoNumero;

    cout << "Ingrese el tercer numero: ";
    cin >> tercerNumero;

    cout << "Ingrese un cuarto numero para comparar con los anteriores: ";
    cin >> cuartoNumero;

    if ((cuartoNumero == primerNumero) || (cuartoNumero == segundoNumero) || (cuartoNumero == tercerNumero)) {
        cout << "El numero ingresado coincide con uno de los anteriores.";
    } else {
        cout << "El numero ingresado no coincide con ninguno de los anteriores";
    };

    return 0;
} */

/* 📌 22. Cambiar un número entero con el mismo valor pero en romanos.
#include <iostream>
using namespace std;

int main()
{
    int numero, unidades, decenas, centenas, millar;

    cout << "Ingrese un numero: ";
    cin >> numero;

    unidades = numero % 10; // Para conseguir las unidades, sacamos el resto de su división por 10.
    numero /= 10;           // "Bajamos" el numero una posición decimal a la izquierda. Si el número es: 1234, ahora será 123

    decenas = numero % 10;
    numero /= 10;

    centenas = numero % 10;
    numero /= 10;

    millar = numero % 10;
    numero /= 10;

    // Unidades de millar en romano (Máx 3)
    switch (millar)
    {
    case 1:
        cout << "M";
        break;
    case 2:
        cout << "MM";
        break;
    case 3:
        cout << "MMM";
        break;
    default:
        if (millar > 3)
        {
            cout << "+MMM";
        }
        break;
    }

    // Centenas en romano:
    switch (centenas)
    {
    case 1:
        cout << "C";
        break;
    case 2:
        cout << "CC";
        break;
    case 3:
        cout << "CCC";
        break;
    case 4:
        cout << "CD";
        break;
    case 5:
        cout << "D";
        break;
    case 6:
        cout << "DC";
        break;
    case 7:
        cout << "DCC";
        break;
    case 8:
        cout << "DCCC";
        break;
    case 9:
        cout << "CM";
        break;
    }

    // Decenas en romano:
    switch (decenas)
    {
    case 1:
        cout << "X";
        break;
    case 2:
        cout << "XX";
        break;
    case 3:
        cout << "XXX";
        break;
    case 4:
        cout << "XL";
        break;
    case 5:
        cout << "L";
        break;
    case 6:
        cout << "LX";
        break;
    case 7:
        cout << "LXX";
        break;
    case 8:
        cout << "LXXX";
        break;
    case 9:
        cout << "XC";
        break;
    }

    // Unidades en romano:
    switch (unidades)
    {
    case 1:
        cout << "I";
        break;
    case 2:
        cout << "II";
        break;
    case 3:
        cout << "III";
        break;
    case 4:
        cout << "IV";
        break;
    case 5:
        cout << "V";
        break;
    case 6:
        cout << "VI";
        break;
    case 7:
        cout << "VII";
        break;
    case 8:
        cout << "VIII";
        break;
    case 9:
        cout << "IX";
        break;
    }

    return 0;
} */

/* 📌 23. Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes al que corresponde.
#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero entre 1 y 12: ";
    cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "El mes numero " << numero << " es: Enero";
        break;
    case 2:
        cout << "El mes numero " << numero << " es: Febrero";
        break;
    case 3:
        cout << "El mes numero " << numero << " es: Marzo";
        break;
    case 4:
        cout << "El mes numero " << numero << " es: Abril";
        break;
    case 5:
        cout << "El mes numero " << numero << " es: Mayo";
        break;
    case 6:
        cout << "El mes numero " << numero << " es: Junio";
        break;
    case 7:
        cout << "El mes numero " << numero << " es: Julio";
        break;
    case 8:
        cout << "El mes numero " << numero << " es: Agosto";
        break;
    case 9:
        cout << "El mes numero " << numero << " es: Septiembre";
        break;
    case 10:
        cout << "El mes numero " << numero << " es: Octubre";
        break;
    case 11:
        cout << "El mes numero " << numero << " es: Noviembre";
        break;
    case 12:
        cout << "El me numero " << numero << " es: Diciembre";
        break;
    default:
        cout << "Ningun mes del año coincide con el numero ingresado";
        break;
    };

    return 0;
} */

/* 📌 24. Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.
#include <iostream>
using namespace std;

int main()
{
    int saldo, opcion, ingreso, egreso;
    saldo = 1000;

    cout << "Que operacion quiere realizar?: \n 1. Ingresar dinero \n 2. Extraer dinero. \n 3. Ver saldo \n 4. Salir \n";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingrese el monto de dinero a ingresar: $";
        cin >> ingreso;
        if (ingreso < 0)
        {
            do
            {
                cout << "El saldo a ingresar no puede ser negativo. Ingrese un nuevo monto de dinero a ingresar: $";
                cin >> ingreso;
            } while (ingreso < 0);
        }
        saldo += ingreso;
        cout << "El saldo actual es: " << saldo;
        break;

    case 2:
        cout << "Ingrese el monto de dinero a extraer: $";
        cin >> egreso;

        if (egreso > saldo)
        {
            do
            {
                cout << "El saldo a extraer es mayor al saldo en cuenta. Ingrese un nuevo monto de dinero a extraer, menor a $" << saldo << ". \n Monto a extraer: $";
                cin >> egreso;
            } while (egreso > saldo);
        }
        saldo -= egreso;
        cout << "El saldo actual es: " << saldo;
        break;

    case 3:
        cout << "El saldo es de: " << saldo;
        break;

    default:
        break;
    };

    return 0;
} */

/* 📌 25. Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numero, opcion;

    cout << "Que operacion desea realizar?\n 1. Cubo de un numero\n 2. Numero par o impar?\n 3. Salir \n";
    cin >> opcion;

    cout << "Ingrese el numero para operar: ";
    cin >> numero;

    switch (opcion)
    {
    case 1:
        cout << "El cubo de" << numero << " es: " << pow(numero, 3);
        break;

    case 2:
        if ((numero % 2) == 0)
        {
            cout << "El numero " << numero << " es par";
        }
        else
        {
            cout << "El numero " << numero << " es impar";
        }
        break;

    default:
        break;
    }

    return 0;
}*/

/* 📌 26.  Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar su tabla de multiplicar.
#include <iostream>
using namespace std;

int main()
{
    int numero;

    do
    {
        cout << "Ingrese un numero entre 1 y 10: ";
        cin >> numero;
    } while ((numero < 1) || (numero > 10));

    for (int i = 1; i <= 10; i++)
    {
        cout << numero << " x " << i << " es: " << numero * i << endl;
    };

    return 0;
} */

/* 📌 27. Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.
#include <iostream>
using namespace std;

int main () {
    int numero, contador;
    contador = 0;

    while (numero != 0) {
        cout << "Ingrese un digito. Para salir del bucle ingrese 0: ";
        cin >> numero;

        if (numero > 0) {
            contador ++;
        }
    }

    cout << "El numero de digitos positivos es: " << contador;

    return 0;
} */

/* 📌 28. Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10 primeros enteros mayores que cero.
#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    for (int i = 1; i <= 10; i++)
    {
        suma += i * i;
    };
    cout << "La suma de los cuadrados de los numeros del 1 al 10 es: " << suma;

    return 0;
} */

/* 📌 29. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.
#include <iostream>
using namespace std;

int main()
{
    float temperaturaActual = 0;
    float temperaturaAnterior = 0;
    float temperaturaMedia = 0;
    float temperaturaMasAlta = 0;
    float temperaturaMasBaja = 1000; // Conviene inicializar la temperatura más baja en un número muy amplio, para que, de ese modo se pueda trabajar con números negativos.

    for (int i = 0; i < 24; i+=4)
    {
        cout << "Ingrese la temperatura actual, a las " << i << ": ";
        cin >> temperaturaActual;

        temperaturaMedia += temperaturaActual;

        if (temperaturaActual >= temperaturaMasAlta)
        {
            temperaturaMasAlta = temperaturaActual;
        } else if ((temperaturaActual <= temperaturaMasBaja) || (temperaturaActual < temperaturaAnterior)) {
            temperaturaMasBaja = temperaturaActual;
        }

        temperaturaAnterior = temperaturaActual;
    }

    cout.precision(3);
    cout << "La temperatura media de hoy es: " << temperaturaMedia / 6 << endl;
    cout << "La temperatura mas alta de hoy es: " << temperaturaMasAlta << endl;
    cout << "La temperatura mas baja de hoy es: " << temperaturaMasBaja << endl;

    return 0;
}*/

/* 📌 30. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.
#include <iostream>
using namespace std;

int main()
{
    int numero;
    int suma = 0;

    do
    {
        cout << "Ingrese un numero. Para salir del bucle ingrese cero o un numero en el rango [20-30]: ";
        cin >> numero;

        if (numero > 0)
        {
            suma += numero;
        }
    } while ((numero != 0) && ((numero < 20) || (numero > 30)))
;

    cout << "La suma de los numeros positivos ingresados es: " << suma;

    return 0;
} */

/* 📌 31. Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow
#include <iostream>
using namespace std;

int main()
{
    int x, y, resultado;
    resultado = 1;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    for (int i = 1; i <= y; i++)
    {
        resultado *= x;
    }

    cout << x << " elevado a " << y << " es: " << resultado;

    return 0;
} */

/* 📌 32.  Escriba un programa que calcule el valor de: 1 + 2 + 3 + ... + n
#include <iostream>
using namespace std;

int main()
{
    int n, suma;
    suma = 0;

    cout << "Suma de tipo: 1 + 2 + 3 + ... + n \n Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }

    cout << "La suma es: " << suma;

    return 0;
} */

/* 📌 33. Escriba un programa que calcule el valor de: 1 + 3 + 5 + ... + (2n-1)
#include <iostream>
using namespace std;

int main()
{
    int n, suma;
    suma = 0;

    cout << "Suma de tipo: 1 + 2 + 3 + ... + (2n - 1) \n Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <= (2 * n - 1); i += 2)
    {
        suma += i;
    }

    cout << "El valor de la suma es: " << suma;
    return 0;
} */

/* 📌 34. Escriba un programa que calcule el factorial de un número: 1 * 2 * 3 * ... * n
#include <iostream>
using namespace std;

int main () {
    int n, factorial;
    factorial = 1;

    cout << "Calcular el factorial de: ";
    cin >> n;

    for (int i= 1; i<=n; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << n << " es: " << factorial;
    return 0;
} */

/* 📌 35. Escriba un programa que calcule el valor de: 1! + 2! + 3! + ... + n! (suma de factoriales).
#include <iostream>
using namespace std;

int main()
{
    int n, factorial, suma;
    factorial = 1;
    suma = 0;

    cout << "Calcular la suma de factoriales hasta: ";
    cin >> n;

    for (int i= 1; i<=n; i++) {
        factorial *= i; // Calcula el factorial de n
        suma += factorial; // Guarda el valor de los factoriales anteriores y los suma. En la primera iteración, consigue y guarda en la suma el valor de 1!; en la segunda, el valor de 2! y así sucesivamente hasta n!.
        // El ejercicio anterior, sólo calcula el producto de los valores de i.
    }

    cout << "La suma de factoriales es: " << suma;

    return 0;
} */

/* 📌 36. Escriba un programa que calcule el valor de: 2^1 + 2^2 + 2^3 + ...+ 2^n
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n, suma;
    suma = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <=n; i++) {
        suma += pow(2, i);
    }

    cout << "La suma de los valores, en la forma: 2^1 + 2^2 + 2^3 + ...+ 2^n es: " << suma;
    return 0;
} */

/* 📌 37. Hacer un programa que calcule el resultado de la siguiente expresion: 1 - 2 + 3 - 4 + 5 - 6 ... n
#include <iostream>
using namespace std;

int main()
{
    int n, suma;
    suma = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            suma -= i;
        }
        else
        {
            suma += i;
        }
    }

    cout << "El resultado de la expresion, con n = " << n << " es: " << suma;

    return 0;
} */

/* 📌 38. Hacer un programa que realice la serie Fibonacci: 1 1 2 3 5 8 13... n
#include <iostream>
using namespace std;

int main()
{
    int n, numeroAnterior, numeroActual, suma;
    numeroAnterior = 0;
    numeroActual = 1; // Inicializa en 1
    suma = 1;

    do
    {
        cout << "Indique la cantidad de elementos de la serie: ";
        cin >> n;
    } while (n <= 0);

    cout << numeroActual << " "; // El primer número de la serie siempre es 1

    for (int i = 1; i < n; i++)
    {
        suma = numeroAnterior + numeroActual;
        cout << suma << " ";

        numeroAnterior = numeroActual; // El número actual se convierte en el anterior
        numeroActual = suma;           // El número calculado ahora es el actual
    }

    return 0;
} */

/* 📌 39. En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron únicamente el último examen.
#include <iostream>
using namespace std;

int main()
{
    int nota1Examen, nota2Examen, nota3Examen, contadorTodosLosExamenes, contadorUnExamen, contadorUltimoExamen;
    contadorTodosLosExamenes = 0;
    contadorUnExamen = 0;
    contadorUltimoExamen = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Ingrese la nota del primer examen para el " << i << " alumno: ";
        cin >> nota1Examen;

        cout << "Ingrese la nota del segundo examen para el " << i << " alumno: ";
        cin >> nota2Examen;

        cout << "Ingrese la nota del tercer examen para el " << i << "  alumno: \n";
        cin >> nota3Examen;

        if (nota1Examen >= 6 && nota2Examen >= 6 && nota3Examen >= 6)
        {
            contadorTodosLosExamenes++;
        }
        if (nota1Examen >= 6 || nota2Examen >= 6 || nota3Examen >= 6)
        {
            contadorUnExamen++;
        }
        if (nota3Examen > 6 && nota1Examen < 6 && nota2Examen < 6)
        {
            contadorUltimoExamen++;
        }
    }

    cout << "Han aprobado todos los examenes: " << contadorTodosLosExamenes << endl;
    cout << "Han aprobado al menos un examen: " << contadorUnExamen << endl;
    cout << "Han aprobado el ultimo examen:" << contadorUltimoExamen << endl;

    return 0;
} */

/* 📌 40.  Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100.
El programa debe generar un numero aleatorio en ese mismo rango[1-100],e indicarle al usuario si el numero que dígito es menor o mayor al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.
#include <iostream>
using namespace std;

int main () {
    int numeroIngresado, contadorIntentos;
    contadorIntentos = 0;

    int numeroRandom = 84; // En este caso está hardcodeado porque en la cursada no se implementan otras bibliotecas además de Cmath, la cual no tiene esa función.
    cout << numeroRandom << endl;

    do {
        cout << "Ingresa un numero en el rango [1 - 100]: ";
        cin >> numeroIngresado;

        if (numeroIngresado > numeroRandom) {
            cout << "El numero ingresado es mayor al random." << endl;
            contadorIntentos ++;
        } else if (numeroIngresado < numeroRandom) {
            cout << "El numero ingresado es menor al random." << endl;
            contadorIntentos ++;
        }
    } while (numeroIngresado != numeroRandom);

    cout << "Adivinaste luego de " << contadorIntentos << " intentos!";
    return 0;
} */

/* 📌 41. Realice un programa que calcule la descomposición en factores primos de un número entero.
#include <iostream>
using namespace std;

int main () {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "El numero " << numero << " descompuesto en sus factores primos: ";
    for (int i = 2; numero > 1; i++) {
        while ((numero % i) == 0) { // En caso de intentar hacerlo con un if, el número sólo se dividirá una única vez por el factor primo. En cambio, el while divide el número tanta veces como sea posible.
            cout << i << " ";
            numero /= i;
        }
    }

    return 0;
} */

/* 📌 42. Escribe un programa que defina un vector de números y calcule la suma de sus elementos.
#include <iostream>
using namespace std;

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar);

void CargarVector(int vector[], int cantidadDePosiciones, int &lenVector);

void MostrarVector(int vector[], int lenVector, int valorInicial);

void SumarElementos(int vector[], int lenVector);

int main()
{
    int numeros[10];
    int lenNumeros = 0;

    InicializarVector(numeros, 10, 0);
    MostrarVector(numeros, lenNumeros, 0);

    CargarVector(numeros, 10, lenNumeros);
    MostrarVector(numeros, lenNumeros, 0);

    SumarElementos(numeros, lenNumeros);

    return 0;
}

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = valorAInicializar;
    };
};

void CargarVector(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "Ingrese el valor a guardar en la posicion " << (i + 1) << endl;
        cin >> vector[i];
        lenVector++;
    };
};

void MostrarVector(int vector[], int lenVector, int valorInicial)
{
    if (lenVector > 0)
    {
        for (int i = 0; i < lenVector; i++)
        {
            if (vector[i] != valorInicial)
            {
                cout << "El valor almacenado en la posicion " << i << " es: " << vector[i] << endl;
            }
        }
    }
    else
    {
        cout << "El vector no ha sido cargado" << endl;
    }
}

void SumarElementos(int vector[], int lenVector) {
    int suma = 0;
    for (int i=0; i< lenVector; i++) {
        suma += vector[i];
    }
    cout << "La suma de los elementos del vector es: " << suma;
}
*/

/* 📌 43.  Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.
#include <iostream>
using namespace std;

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar);

void CargarVector(int vector[], int cantidadDePosiciones, int &lenVector);

void MostrarVector(int vector[], int lenVector, int valorInicial);

void ProductoElementos(int vector[], int lenVector);

int main()
{
    int numeros[5];
    int lenNumeros = 0;

    InicializarVector(numeros, 5, 0);
    MostrarVector(numeros, lenNumeros, 0);

    CargarVector(numeros, 5, lenNumeros);
    MostrarVector(numeros, lenNumeros, 0);

    ProductoElementos(numeros, lenNumeros);

    return 0;
}

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = valorAInicializar;
    };
};

void CargarVector(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "Ingrese el valor a guardar en la posicion " << (i + 1) << endl;
        cin >> vector[i];
        lenVector++;
    };
};

void MostrarVector(int vector[], int lenVector, int valorInicial)
{
    if (lenVector > 0)
    {
        for (int i = 0; i < lenVector; i++)
        {
            if (vector[i] != valorInicial)
            {
                cout << "El valor almacenado en la posicion " << i << " es: " << vector[i] << endl;
            }
        }
    }
    else
    {
        cout << "El vector no ha sido cargado" << endl;
    }
}

void ProductoElementos(int vector[], int lenVector)
{
    int producto = 1;
    for (int i = 0; i < lenVector; i++)
    {
        producto *= vector[i];
    }
    cout << "El producto de los elementos del vector es: " << producto;
} */

/* 📌 44. Escribe un programa que lea de la entrada estándar un vector de números y muestre en la salida estándar los números del vector con sus índices asociados.
#include <iostream>
using namespace std;

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar);

void CargaMVector(int vector[], int cantidadDePosiciones, int &lenVector);

void MostrarVector(int vector[], int lenVector, int valorInicial);

int main(){
    int vectorNumeros[10], lenVectorNumeros = 0;

    InicializarVector(vectorNumeros, 10, 0);
    CargaMVector(vectorNumeros, 10, lenVectorNumeros);
    MostrarVector(vectorNumeros, lenVectorNumeros, 0);

    return 0;
}

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = valorAInicializar;
    };
};

void CargaMVector(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = i+1;
        lenVector++;
    };
};

void MostrarVector(int vector[], int lenVector, int valorInicial)
{
    if (lenVector > 0)
    {
        for (int i = 0; i < lenVector; i++)
        {
            if (vector[i] != valorInicial)
            {
                cout << "El valor almacenado en la posicion " << i << " es: " << vector[i] << endl;
            }
        }
    }
    else
    {
        cout << "El vector no ha sido cargado" << endl;
    }
} */

/* 📌 45. Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en orden inverso—del último al primer elemento.
#include <iostream>
using namespace std;

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar);

void CargaMVector(int vector[], int cantidadDePosiciones, int &lenVector);

void MostrarVectorInv(int vector[], int lenVector, int valorInicial);

int main(){
    int vectorNumeros[10], lenVectorNumeros = 0;

    InicializarVector(vectorNumeros, 10, 0);
    CargaMVector(vectorNumeros, 10, lenVectorNumeros);
    MostrarVectorInv(vectorNumeros, lenVectorNumeros, 0);

    return 0;
}

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = valorAInicializar;
    };
};

void CargaMVector(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = i+1;
        lenVector++;
    };
};

void MostrarVectorInv(int vector[], int lenVector, int valorInicial)
{
    if (lenVector > 0)
    {
        for (int i = lenVector - 1; i >= 0; i--)
        {
            if (vector[lenVector] != valorInicial)
            {
                cout << "El valor almacenado en la posicion " << i << " es: " << vector[i] << endl;
            }
        }
    }
    else
    {
        cout << "El vector no ha sido cargado" << endl;
    }
} */

/* 📌 46.  Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.
#include <iostream>
using namespace std;

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar);

void CargarVector(int vector[], int cantidadDePosiciones, int &lenVector);

void MostrarVector(int vector[], int lenVector, int valorInicial);

void MayorElemento(int vector[], int lenVector, int valorInicial);

int main()
{
    int vectorNumeros[10], lenVectorNumeros = 0;

    InicializarVector(vectorNumeros, 10, 0);
    CargarVector(vectorNumeros, 5, lenVectorNumeros);
    MostrarVector(vectorNumeros, lenVectorNumeros, 0);
    MayorElemento(vectorNumeros, lenVectorNumeros, 0);

    return 0;
}

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = valorAInicializar;
    };
};

void CargarVector(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "Ingrese el valor a guardar en la posicion " << (i + 1) << ": ";
        cin >> vector[i];
        lenVector++;
    };
};

void MostrarVector(int vector[], int lenVector, int valorInicial)
{
    if (lenVector > 0)
    {
        for (int i = 0; i < lenVector; i++)
        {
            if (vector[i] != valorInicial)
            {
                cout << "El valor almacenado en la posicion " << i << " es: " << vector[i] << endl;
            }
        }
    }
    else
    {
        cout << "El vector no ha sido cargado" << endl;
    }
}

void MayorElemento(int vector[], int lenVector, int valorInicial)
{
    int elementoAnterior = 0, MayorElemento = 0;
    if (lenVector != 0)
    {
        for (int i = 0; i < lenVector; i++)
        {
            if (vector[i] >= elementoAnterior)
            {
                MayorElemento = vector[i];
            }
            elementoAnterior = vector[i];
        }
    }
    cout << "El mayor valor en el array es: " << MayorElemento;
} */

/* 📌 47. Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.
#include <iostream>
using namespace std;

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar);
void CargarVector(int vector[], int cantidadDePosiciones, int &lenVector);
int MayorElemento(int vector[], int lenVector, int valorInicial);
int SumarElementos(int vector[], int lenVector);
int BuscarEnElVector(int vector[], int lenVector, int ValorABuscar);
void ImpresionBusqueda(int vector[], int lenVector, int valorABuscar);
void MostrarVector(int vector[], int lenVector, int valorInicial);

int main()
{
    int vectorNumeros[10], lenVectorNumeros = 0;
    int mayorElemento, sumaElementos;

    InicializarVector(vectorNumeros, 10, 0);
    CargarVector(vectorNumeros, 5, lenVectorNumeros);
    MostrarVector(vectorNumeros, lenVectorNumeros, 0);

    mayorElemento = MayorElemento(vectorNumeros, lenVectorNumeros, 0);
    sumaElementos = SumarElementos(vectorNumeros, lenVectorNumeros);

    BuscarEnElVector(vectorNumeros, lenVectorNumeros, (sumaElementos - mayorElemento));

    ImpresionBusqueda(vectorNumeros, lenVectorNumeros, (sumaElementos - mayorElemento));

    return 0;
}

void InicializarVector(int vector[], int cantidadDePosiciones, int valorAInicializar)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        vector[i] = valorAInicializar;
    };
};

void CargarVector(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "Ingrese el valor a guardar en la posicion " << (i + 1) << ": ";
        cin >> vector[i];
        lenVector++;
    };
};

int SumarElementos(int vector[], int lenVector)
{
    int suma = 0;
    for (int i = 0; i < lenVector; i++)
    {
        suma += vector[i];
    }
    return suma;
}

int BuscarEnElVector(int vector[], int lenVector, int ValorABuscar)
{
    if (lenVector > 0)
    {
        for (int i = 0; i <= lenVector; i++)
        {
            if (vector[i] == ValorABuscar)
            {
                return i;
            }
        }
        return -1;
    }
}

void ImpresionBusqueda(int vector[], int lenVector, int valorABuscar)
{
    int busqueda = BuscarEnElVector(vector, lenVector, valorABuscar);
    if (busqueda == -1)
    {
        cout << "Valor no encontrado." << endl;
    }
    else
    {
        cout << "Valor encontrado. Se encuentra en la posicion: " << busqueda << endl;
    };
};

void MostrarVector(int vector[], int lenVector, int valorInicial)
{
    if (lenVector > 0)
    {
        for (int i = 0; i < lenVector; i++)
        {
            if (vector[i] != valorInicial)
            {
                cout << "El valor almacenado en la posicion " << i << " es: " << vector[i] << endl;
            }
        }
    }
    else
    {
        cout << "El vector no ha sido cargado" << endl;
    }
}

int MayorElemento(int vector[], int lenVector, int valorInicial)
{
    int elementoAnterior = 0, MayorElemento = 0;
    if (lenVector != 0)
    {
        for (int i = 0; i < lenVector; i++)
        {
            if (vector[i] >= elementoAnterior)
            {
                MayorElemento = vector[i];
            }
            elementoAnterior = vector[i];
        }
    }
    return MayorElemento;
} */

/* 📌 48.  Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.
#include <iostream>
using namespace std;

void MostrarVector(char vector[], int cantidadDePosiciones);

int main()
{
    char vector1[] = {'a', 'b', 'c'};
    char vector2[] = {'d', 'e', 'f'};
    // En este caso en el que se inicializan ambos vectores a partir de una lista de elementos, no es necesario inicializar el len junto con ellos porque la cantidad de posiciones ocupadas está relacionado con la cantida total de elementos
    char vectores[6];

    for (int i = 0; i < 3; i++)
    {
        vectores[i] = vector1[i];
    }

    for (int i = 3; i < 6; i++)
    {
        vectores[i] = vector2[i-3];
    }

    MostrarVector(vectores, 6);

    return 0;
}

void MostrarVector(char vector[], int cantidadDePosiciones)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "El valor almacenado en la posicion " << i << " es: " << vector[i] << endl;
    }
} */

/* 📌 49. Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.
#include <iostream>
using namespace std;

void MostrarVector(int vector[], int cantidadDePosiciones);

int main()
{
    int num1[] = {1, 2, 3, 4, 5};
    int numeros[10];

    for (int i = 0; i < 5; i++)
    {
        numeros[i] = 2 * num1[i];
    }

    MostrarVector(numeros, 10);

    return 0;
}

void MostrarVector(int vector[], int cantidadDePosiciones)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "El valor almacenado en la posicion " << i << " es: " << vector[i] << endl;
    }
} */

/* 📌 50. Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas, Posteriormente mostrar la matriz en pantalla.
#include <iostream>
using namespace std;

void CargarMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas);

void MostrarMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas);

int main()
{
    int numFilas = 0, numColumnas = 0;
    int matriz[100][100];

    cout << "Ingrese el numero de filas: ";
    cin >> numFilas;

    cout << "Ingrese el numero de columnas: ";
    cin >> numColumnas;

    CargarMatriz(matriz, numFilas, numColumnas);
    MostrarMatriz(matriz, numFilas, numColumnas);

    return 0;
}

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
    }
}

void MostrarMatriz(int matriz[][100], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
} */

/* 📌 51. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.
#include <iostream>
using namespace std;

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

void DiagonalPrincipalMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

int main()
{
    int matriz[3][3];
    CargarMatriz(matriz, 3, 3);
    DiagonalPrincipalMatriz(matriz, 3, 3);

    return 0;
}

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        // Por cada fila (i), recorre cada una de las columnas (j)
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << "Ingrese el valor a guardar en la posicion [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        };
    }
}

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void DiagonalPrincipalMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    cout << "Elementos de la diagonal principal: ";
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            if (i == j)
            {
                cout << matriz[i][j] << " ";
            }
        }
    }
} */

/* 📌 52. Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz.
#include <iostream>
using namespace std;

void CargarMatriz(int matriz[][2], int cantidadDeFilas, int cantidadDeColumnas);

void MostrarMatriz(int matriz[][2], int cantidadDeFilas, int cantidadDeColumnas);

int main()
{
    int matriz[2][2];
    int matriz2[2][2];

    CargarMatriz(matriz, 2, 2);
    cout << "La matriz original es: " << endl;
    MostrarMatriz(matriz, 2, 2);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz2[i][j] = matriz[i][j];
        }
    }

    cout << "La matriz copiada es: " << endl;
    MostrarMatriz(matriz2, 2, 2);

    return 0;
}

void CargarMatriz(int matriz[][2], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        // Por cada fila (i), recorre cada una de las columnas (j)
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << "Ingrese el valor a guardar en la posicion [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        };
    }
}

void MostrarMatriz(int matriz[][2], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
} */

/* 📌 - Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla. */

/* 📌 54. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.
#include <iostream>
using namespace std;

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

void MatrizTraspuesta(int matriz[][3], int matriz2[][3], int cantidadDeFilas, int cantidadDeColumnas);

int main()
{
    int matriz[3][3];
    int matriz2[3][3];

    CargarMatriz(matriz, 3, 3);

    cout << "La matriz original es: " << endl;
    MostrarMatriz(matriz, 3, 3);

    cout << "La matriz traspuesta es: " << endl;
    MatrizTraspuesta(matriz, matriz2, 3, 3);
    MostrarMatriz(matriz2, 3, 3);

    return 0;
}

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        // Por cada fila (i), recorre cada una de las columnas (j)
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << "Ingrese el valor a guardar en la posicion [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        };
    }
}

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void MatrizTraspuesta(int matriz[][3], int matriz2[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            matriz2[i][j] = matriz[j][i];
        }
    }
} */

/* 📌 55.  Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
#include <iostream>
using namespace std;

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

void SumaMatrices(int matriz[][3], int matriz2[][3], int resultado[][3], int cantidadDeFilas, int cantidadDeColumnas);

int main()
{
    int matriz[3][3];
    int matriz2[3][3];
    int sumaMatrices[3][3];

    CargarMatriz(matriz, 3, 3);
    CargarMatriz(matriz2, 3, 3);

    cout << "La suma de ambas matrices es: " << endl;
    SumaMatrices(matriz, matriz2, sumaMatrices, 3, 3);
    MostrarMatriz(sumaMatrices, 3, 3);

    return 0;
}

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    cout << "Cargando la matriz..." << endl;
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        // Por cada fila (i), recorre cada una de las columnas (j)
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << "Ingrese el valor a guardar en la posicion [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        };
    }
}

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void SumaMatrices(int matriz[][3], int matriz2[][3], int resultado[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            resultado[i][j] = (matriz[i][j] + matriz2[i][j]);
        }
    }
} */

/* 📌 56. Desarrollar un programa que determine si una matriz es simétrica o no.
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.
#include <iostream>
using namespace std;

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

int CompararMatrices(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas, int matriz2[][3], int cantidadDeFilas2M, int cantidadDeColumnas2M);

void EsSimetrica(int matriz[][3], int matrizTraspuesta[][3], int cantidadDeFilas, int cantidadDeColumnas);

void MatrizTraspuesta(int matriz[][3], int matriz2[][3], int cantidadDeFilas, int cantidadDeColumnas);

int main()
{
    int matriz[3][3];
    int matriz2[3][3];

    CargarMatriz(matriz, 3, 3);

    cout << "La matriz original es: " << endl;
    MostrarMatriz(matriz, 3, 3);

    cout << "La matriz traspuesta es: " << endl;
    MatrizTraspuesta(matriz, matriz2, 3, 3);
    MostrarMatriz(matriz2, 3, 3);

    EsSimetrica(matriz, matriz2, 3, 3);

    return 0;
}

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        // Por cada fila (i), recorre cada una de las columnas (j)
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << "Ingrese el valor a guardar en la posicion [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        };
    }
}

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void MatrizTraspuesta(int matriz[][3], int matriz2[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            matriz2[i][j] = matriz[j][i];
        }
    }
};

int CompararMatrices(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas, int matriz2[][3], int cantidadDeFilas2M, int cantidadDeColumnas2M)
{
    if ((cantidadDeFilas != cantidadDeFilas2M) || (cantidadDeColumnas != cantidadDeColumnas2M))
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < cantidadDeFilas; i++)
        {
            for (int j = 0; j < cantidadDeColumnas; j++)
            {
                if (matriz[i][j] != matriz2[i][j])
                {
                    return -1;
                }
            }
        }
    }
    return 1;
}

void EsSimetrica(int matriz[][3], int matrizTraspuesta[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    int sonIguales = CompararMatrices(matriz, cantidadDeFilas, cantidadDeColumnas, matrizTraspuesta, cantidadDeColumnas, cantidadDeFilas);
    if (cantidadDeFilas != cantidadDeColumnas)
    {
        cout << "La matriz no es simetrica porque no es cuadrada." << endl;
    }
    else
    {
        if (sonIguales == 1)
        {
            cout << "La matriz es simetrica porque es cuadrada e igual a su traspuesta.";
        }
        else
        {
            cout << "La matriz no es simetrica porque no es igual a su traspuesta. ";
        }
    }
} */

/* 📌 57. Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.
#include <iostream>
using namespace std;

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas);

void ProductoMatrices(int matrizA[][3], int matrizB[][3], int matrizResultado[][3]);

int main()
{
    int matriz[3][3];
    int matriz2[3][3];
    int resultado[3][3];

    CargarMatriz(matriz, 3, 3);

    cout << "La primera matriz es: " << endl;
    MostrarMatriz(matriz, 3, 3);

    CargarMatriz(matriz2, 3, 3);

    cout << "La segunda matriz es: " << endl;
    MostrarMatriz(matriz2, 3, 3);

    ProductoMatrices(matriz, matriz2, resultado);

    cout << "El producto de la matriz A y B es:" << endl;
    MostrarMatriz(resultado, 3, 3);

    return 0;
}

void CargarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        // Por cada fila (i), recorre cada una de las columnas (j)
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << "Ingrese el valor a guardar en la posicion [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        };
    }
}

void MostrarMatriz(int matriz[][3], int cantidadDeFilas, int cantidadDeColumnas)
{
    for (int i = 0; i < cantidadDeFilas; i++)
    {
        for (int j = 0; j < cantidadDeColumnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void ProductoMatrices(int matrizA[][3], int matrizB[][3], int matrizResultado[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizResultado[i][j] = 0; // Inicializa la posición a 0
            for (int k = 0; k < 3; k++)
            {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
} */

/* 📌 58. Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar su longitud, y si supera los 10 caracteres mostrarla en pantalla, caso contrario, no mostrarla.
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int maxLength = 100;
    char texto[maxLength];

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(texto, maxLength);

    size_t longitudTexto = strlen(texto);
    cout << "La longitud de la cadena es: " << longitudTexto << endl;

    if (longitudTexto < 10)
    {
        cout << "La cadena no tiene la longitud pedida. ";
    }
    else
    {
        cout << texto;
    }

    return 0;
}*/

/* 📌 59. Pedir al usuario una cadena de caracteres, almacenarla en un arrreglo y copiar todo su cotenido hacia otro arreglo de caracteres.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int maxLength = 100;
    char texto[maxLength], copia[maxLength];

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(texto, maxLength);

    strcpy(copia, texto);

    cout << "El texto copiado dice: " << copia;

    return 0;
} */

/* 📌 60. Pedir al usuario que digite dos cadenas de caracteres e indicar si ambas son iguales. En caso de no serlo, indicar cuál es la mayor alfabéticamente.
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int maxLength = 100, sonIguales;
    char texto1[maxLength], texto2[maxLength];

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(texto1, maxLength);

    cout << "Ingrese otra cadena de caracteres para compararla con la anterior: ";
    cin.getline(texto2, maxLength);

    sonIguales = strcmp(texto1, texto2);

    if (sonIguales == 0)
    {
        cout << "Ambos strings son iguales.";
    }
    else
    {
        cout << "Los strings son diferentes. ";
        if (sonIguales < 0)
        {
            cout << texto1 << " es alfabeticamente superior a " << texto2 << ".";
        }
        if (sonIguales > 0)
        {
            cout << texto1 << " es alfabeticamente superior a " << texto2 << ".";
        }
    }

    return 0;
} */

/* 📌 61. Crear una cadena que tenga la siguiente frase: "Hola que tal", luego crear otra para preguntarle al usuario su nombre, por último añadirlo al final de la primera y mostrar el mensaje completo: "Hola que tal + nombre"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char bienvenida[100] = "Hola que tal ";
    char nombre[50];

    size_t longitud = strlen(bienvenida);
    cout << "La longitud de la cadena es: " << longitud << endl;

    cout << "Ingrese su nombre: ";
    cin.getline(nombre, 50);

    strcat(bienvenida, nombre);

    cout << bienvenida;

    return 0;
} */

/* 📌 62. Hacer un programa que determine si una palabra es políndroma
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char palabra[50];
    char cpyPalabra[50];
    int sonDistintas;

    cout << "Ingrese la palabra: ";
    cin >> palabra;

    // Como strrev es destructiva, copio el contenido de "palabra" a un 2do. string
    strcpy(cpyPalabra, palabra);

    strrev(palabra);

    sonDistintas = strcmp(palabra, cpyPalabra);

    if (sonDistintas == 0)
    {
        cout << "La palabra es polindroma";
    }
    else
    {
        cout << "La palabra no es polindroma";
    }

    return 0;
} */

/* 📌 63. Convertir dos cadenas de minúsculas a mayúsculas. Compararlas y decir si son iguales o no.
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char cadena1[50];
    char cadena2[50];
    int sonIguales;

    cout << "Ingrese la cadena1: ";
    cin.getline(cadena1, 50);

    cout << "Ingrese la cadena2: ";
    cin.getline(cadena2, 50);

    strupr(cadena1);
    strupr(cadena2);

    sonIguales = strcmp(cadena1, cadena2);
    if (sonIguales == 0)
    {
        cout << "Ambas cadenas son iguales.";
    }
    else
    {
        cout << "Las cadenas son distintas.";
    }

    return 0;
} */

/* 📌 64. Pedir nombre al usuario en mayúscula. Si su nombre empieza por la letra A, convertirlo a minuscula. Caso contrario, no hacerlo.
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char nombre[50];

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    if (nombre[0] == 'A')
    {
        cout << strupr(nombre);
    }
    else
    {
        cout << nombre;
    };

    return 0;
} */

/* 📌 65. Pedir al usuario 2 cadenas de caracteres dde números, uno entero y el otro real, convertirlos a sus respectivos valores y por últimos sumarlos.
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char numero1[10], numero2[10];
    float resultado;

    cout << "Ingrese el primer numero (entero): ";
    cin >> numero1;

    cout << "Ingrese el segundo numero (real): ";
    cin >> numero2;

    resultado = atoi(numero1) + atof(numero2);

    cout << "La suma de ambos numeros ingresados es: " << resultado;

    return 0;
} */

/* 📌 66. Realice un programa que lea una cadena de caracteres e la entrada estandar y muestre en la salida estándar cuántas ocurrencias de cada vocal existen en la cadena.
#include <iostream>
#include <string.h> // Conviene hacerlo sin ctring porque cstring requiere el tipo size_t y no puede compararse con i

using namespace std;

int main()
{
    char texto[50];
    int a = 0, e = 0, i = 0, o = 0, u = 0, longTexto;

    cout << "Ingrese el texto: ";
    cin.getline(texto, 50);

    longTexto = strlen(texto);

    for (int i = 0; i < longTexto; i++)
    {
        switch (texto[i])
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
    }

    cout << "El texto tiene una longitud de " << longTexto << "\n"
         << "Tiene: " << a << " letras a; " << e << " letras e; " << i << " letras i; " << o << " letras o; " << u << " letras u; ";

    return 0;
} */

/* 📌 Ordenamiento Burbuja
#include <iostream>

using namespace std;

void CargaManual(int vector[], int cantidadDePosiciones, int &lenVector);
void OrdenamientoBurbuja(int vector[], int lenVector);
void MostrarArray(int vector[], int lenVector);

int main()
{
    int numeros[10], lenNumeros = 0;

    CargaManual(numeros, 10, lenNumeros);
    cout << "El arreglo original es: " << endl;
    MostrarArray(numeros, lenNumeros);

    OrdenamientoBurbuja(numeros, lenNumeros);

    MostrarArray(numeros, lenNumeros);

    return 0;
}

void CargaManual(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "Ingrese el valor a guardar en la posicion " << (i + 1) << endl;
        cin >> vector[i];
        lenVector++;
    };
};

void OrdenamientoBurbuja(int vector[], int lenVector)
{
    cout << "Ordenando el vector..." << endl;
    for (int i = 0; i < lenVector - 1; i++)
    {
        for (int j = 0; j < lenVector - 1 - i; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                // Intercambio
                int auxiliar = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = auxiliar;
            }
        }
    }
};

void MostrarArray(int vector[], int lenVector)
{
    for (int i = 0; i < lenVector; i++)
    {
        cout << "El elemento en la posicion " << i << " tiene el valor de: " << vector[i] << endl;
    };
}; */

/* 📌 Ordenamiento por inserción
#include <iostream>

using namespace std;

void CargaManual(int vector[], int cantidadDePosiciones, int &lenVector);
void OrdenamientoPorInsercion(int vector[], int lenVector);
void MostrarArray(int vector[], int lenVector);

int main()
{
    int numeros[10], lenNumeros = 0;

    CargaManual(numeros, 10, lenNumeros);
    cout << "El arreglo original es: " << endl;
    MostrarArray(numeros, lenNumeros);

    OrdenamientoPorInsercion(numeros, lenNumeros);

    MostrarArray(numeros, lenNumeros);

    return 0;
}

void CargaManual(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "Ingrese el valor a guardar en la posicion " << (i + 1) << endl;
        cin >> vector[i];
        lenVector++;
    };
};

void OrdenamientoPorInsercion(int vector[], int lenVector)
{
    cout << "Ordenando el vector... OxI" << endl;
    for (int i = 1; i < lenVector; i++)
    {
        int numeroActual = vector[i];
        int posicion = i;

        while (posicion > 0 && vector[posicion - 1] > numeroActual)
        {
            vector[posicion] = vector[posicion - 1];
            posicion--;
        }
        vector[posicion] = numeroActual;
    }
};

void MostrarArray(int vector[], int lenVector)
{
    for (int i = 0; i < lenVector; i++)
    {
        cout << "El elemento en la posicion " << i << " tiene el valor de: " << vector[i] << endl;
    };
}; */

/* 📌 Ordenamiento por selección
#include <iostream>

using namespace std;

void CargaManual(int vector[], int cantidadDePosiciones, int &lenVector);
void OrdenamientoPorSeleccion(int vector[], int lenVector);
void MostrarArray(int vector[], int lenVector);

int main()
{
    int numeros[10], lenNumeros = 0;

    CargaManual(numeros, 10, lenNumeros);
    cout << "El arreglo original es: " << endl;
    MostrarArray(numeros, lenNumeros);

    OrdenamientoPorSeleccion(numeros, lenNumeros);

    MostrarArray(numeros, lenNumeros);

    return 0;
}

void CargaManual(int vector[], int cantidadDePosiciones, int &lenVector)
{
    for (int i = 0; i < cantidadDePosiciones; i++)
    {
        cout << "Ingrese el valor a guardar en la posicion " << (i + 1) << endl;
        cin >> vector[i];
        lenVector++;
    };
};

void OrdenamientoPorSeleccion(int vector[], int lenVector)
{
    cout << "Ordenando el vector... OxS" << endl;
    for (int i = 0; i < lenVector - 1; i++)
    {
        int indiceMenorElemento = i;

        for (int indiceActual = i + 1; indiceActual < lenVector; indiceActual++)
        {
            if (vector[indiceActual] < vector[indiceMenorElemento])
            {
                indiceMenorElemento = indiceActual;
            }
        }

        if (indiceMenorElemento != i)
        {
            int auxiliar = vector[i];
            vector[i] = vector[indiceMenorElemento];
            vector[indiceMenorElemento] = auxiliar;
        }
    }
};

void MostrarArray(int vector[], int lenVector)
{
    for (int i = 0; i < lenVector; i++)
    {
        cout << "El elemento en la posicion " << i << " tiene el valor de: " << vector[i] << endl;
    };
}; */

/* 📌 67.  Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle una categoría de competición:
- Juvenil menor o = 18 años
- Señor menor o = 40 años
- Veterano mayor a 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    struct corredor
    {
        char nombre[50];
        int edad;
        char sexo;
        char club[50];
        char categoria[10];
    } corredor1;

    cout << "Ingrese su nombre: ";
    cin.getline(corredor1.nombre, 50);


    cout << "Ingrese su edad: ";
    cin >> corredor1.edad;

    cout << "Ingrese su sexo (F para femenino; M para masculino): ";
    cin >> corredor1.sexo;

    cout << "Ingrese el nombre de su club: ";
    cin.ignore(); // Limpia el buffer
    cin.getline(corredor1.club, 50);

    if (corredor1.edad <= 18)
    {
        strcpy(corredor1.categoria, "Juvenil");
    }
    else if (corredor1.edad <= 40)
    {
        strcpy(corredor1.categoria, "Senor");
    }
    else
    {
        strcpy(corredor1.categoria, "Veterano");
    }

    cout << "Datos del corredor: \nNombre: " << corredor1.nombre << "\nEdad: " << corredor1.edad << "\nSexo: " << corredor1.sexo << "\nClub: " << corredor1.club << "\nCategoria: " << corredor1.categoria;

    return 0;
} */

/* 📌 68. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    struct Alumno
    {
        char nombre[50];
        int edad;
        int promedio;
    };

    Alumno alumnos[3];
    int lenAlumnos = 0;
    int mejorPromedio = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Cargando un nuevo alumno..." << endl;
        cout << "Ingrese el nombre del " << i + 1 << " alumno: ";
        cin.ignore();
        cin.getline(alumnos[i].nombre, 50);

        cout << "Ingrese la edad del " << i + 1 << " alumno: ";
        cin >> alumnos[i].edad;

        cout << "Ingrese el promedio del " << i + 1 << " alumno: ";
        cin >> alumnos[i].promedio;

        lenAlumnos++;
    }

    cout << lenAlumnos << endl;

    // Recorriendo el array para chequear el mejor promedio:
    for (int i = 1; i < 3; i++)
    {
        // Si el promedio del alumno actual es mayor que el mejor promedio registrado
        if (alumnos[i].promedio > alumnos[mejorPromedio].promedio)
        {
            mejorPromedio = i; // Actualiza el índice del mejor promedio
        }
    }

    cout << "El mejor promedio lo tiene el " << mejorPromedio+1 << " alumno, " << alumnos[mejorPromedio].nombre << ", con un promedio de: " << alumnos[mejorPromedio].promedio << endl;

    return 0;
} */

/* 📌 69. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima los datos del empleado con mayor y menor salario.
#include <iostream>

using namespace std;

int main()
{
    struct Empleado
    {
        char nombre[50];
        float salario;
    };

    Empleado empleados[100];
    int lenEmpleados = 0;

    int mayorSalario = 0,
        menorSalario = 0,
        cantidadDeEmpleados;

    cout << "Ingrese la cantidad de empleados a cargar: ";
    cin >> cantidadDeEmpleados;

    for (int i = 0; i < cantidadDeEmpleados; i++)
    {
        cout << "Cargando un nuevo empleado..." << endl;
        cout << "Ingrese el nombre del " << i + 1 << " empleado: ";
        cin.ignore();
        cin.getline(empleados[i].nombre, 50);

        cout << "Ingrese el salario del " << i + 1 << " empleado: ";
        cin >> empleados[i].salario;

        lenEmpleados++;
    }

    for (int i = 0; i < lenEmpleados; i++)
    {
        if (empleados[i].salario < empleados[menorSalario].salario)
        {
            menorSalario = i;
        }
        if (empleados[i].salario > empleados[mayorSalario].salario)
        {
            mayorSalario = i;
        }
    }

    cout << "De los empleados ingresados, el empleado con mayor salario es " << empleados[mayorSalario].nombre << ", con un salario de: " << empleados[mayorSalario].salario << endl;

    cout << "De los empleados ingresados, el empleado con menor salario es " << empleados[menorSalario].nombre << ", con un salario de: " << empleados[menorSalario].salario;

    return 0;
} */

/* 📌 70. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país, numero_medallas. y devuelva los datos (Nombre, país) del atleta que ha ganado el mayor número de medallas.
#include <iostream>

using namespace std;

int main()
{
    struct Atleta
    {
        char nombre[50];
        char pais[15];
        int numero_medallas;
    };

    Atleta atletas[100];
    int lenAtletas = 0;

    int mayorCatidadMedallas = 0,
        cantidadDeAtletas;

    cout << "Ingrese la cantidad de atletas a cargar: ";
    cin >> cantidadDeAtletas;

    for (int i = 0; i < cantidadDeAtletas; i++)
    {
        cout << "Cargando un nuevo atleta..." << endl;
        cout << "Ingrese el nombre del " << i + 1 << " atleta: ";
        cin.ignore();
        cin.getline(atletas[i].nombre, 50);

        cout << "Ingrese el pais del " << i + 1 << " atleta: ";
        cin.getline(atletas[i].pais, 15);

        cout << "Ingrese el numero de medallas ganadas por el atleta: ";
        cin >> atletas[i].numero_medallas;

        lenAtletas++;
    }

    for (int i = 0; i < lenAtletas; i++)
    {
        if (atletas[i].numero_medallas > atletas[mayorCatidadMedallas].numero_medallas)
        {
            mayorCatidadMedallas = i;
        }
    }

    cout << "De los atletas ingresados, el atleta con mayor cantidad de medallas es: " << atletas[mayorCatidadMedallas].nombre << ", de " << atletas[mayorCatidadMedallas].pais << ", con un total de: " << atletas[mayorCatidadMedallas].numero_medallas << " medallas ganadas." << endl;

    return 0;
} */

/* 📌 71. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; y otro llamada alumno que tendrá los siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.
#include <iostream>

using namespace std;

int main()
{
    struct Promedio
    {
        float nota1;
        float nota2;
        float nota3;
    };

    struct Alumno
    {
        char nombre[50];
        char sexo;
        int edad;
        Promedio promedio;
        float notaFinal;
    };

    Alumno alumno1;
    int lenAlumnos = 0;
    float promedio = 0;

    cout << "Cargando un nuevo alumno..." << endl;
    cout << "Ingrese el nombre del alumno: ";
    cin.ignore();
    cin.getline(alumno1.nombre, 50);

    cout << "Ingrese el sexo del alumno: ";
    cin >> alumno1.sexo;

    cout << "Ingrese la edad del alumno: ";
    cin >> alumno1.edad;

    cout << "Ingrese la primera nota del alumno: ";
    cin >> alumno1.promedio.nota1;

    cout << "Ingrese la segunda nota del alumno: ";
    cin >> alumno1.promedio.nota2;

    cout << "Ingrese la tercera nota del alumno: ";
    cin >> alumno1.promedio.nota3;

    lenAlumnos++;

    // Calculo promedio
    promedio = ((alumno1.promedio.nota1 + alumno1.promedio.nota2 + alumno1.promedio.nota3) / 3);
    alumno1.notaFinal = promedio;

    // Impresion de los datos

    cout << "Nombre del alumno: " << alumno1.nombre << endl;
    cout << "Sexo del alumno: " << alumno1.sexo << endl;
    cout << "Edad del alumno: " << alumno1.edad << endl;
    cout << "Promedio del alumno: " << alumno1.notaFinal << endl;

    return 0;
} */

/* 📌 72. Utilizar las 2 estructuras del problema anterior, pero ahora pedir los datos para N alumnos, y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.
#include <iostream>

using namespace std;

int main()
{
    struct Promedio
    {
        float nota1;
        float nota2;
        float nota3;
    };

    struct Alumno
    {
        char nombre[50];
        char sexo;
        int edad;
        Promedio promedio;
        float notaFinal;
    };

    Alumno alumnos[100];
    int lenAlumnos = 0;
    int mejorNotaFinal = 0, cantidadDeAlumnos;
    float promedio = 0;

    cout << "Ingrese la cantidad de alumnos a cargar: ";
    cin >> cantidadDeAlumnos;

    for (int i = 0; i < cantidadDeAlumnos; i++)
    {
        cout << "Cargando un nuevo alumno..." << endl;
        cout << "Ingrese el nombre del " << i + 1 << " alumno: ";
        cin.ignore();
        cin.getline(alumnos[i].nombre, 50);

        cout << "Ingrese el sexo del " << i + 1 << " alumno: ";
        cin >> alumnos[i].sexo;

        cout << "Ingrese la edad del " << i + 1 << " alumno: ";
        cin >> alumnos[i].edad;

        cout << "Ingrese la primera nota del " << i + 1 << " alumno: ";
        cin >> alumnos[i].promedio.nota1;

        cout << "Ingrese la segunda nota del " << i + 1 << " alumno: ";
        cin >> alumnos[i].promedio.nota2;

        cout << "Ingrese la tercera nota del " << i + 1 << " alumno: ";
        cin >> alumnos[i].promedio.nota3;

        lenAlumnos++;
    }

    // Calculo promedio
    for (int i = 0; i < lenAlumnos; i++)
    {
        promedio = ((alumnos[i].promedio.nota1 + alumnos[i].promedio.nota2 + alumnos[i].promedio.nota3) / 3.0);
        alumnos[i].notaFinal = promedio;
    }

    // Cálculo mejor promedio
    for (int i = 0; i < lenAlumnos; i++)
    {
        if (alumnos[i].notaFinal > alumnos[mejorNotaFinal].notaFinal)
        {
            mejorNotaFinal = i;
        }
    }

    // Impresion de los datos
    for (int i = 0; i < lenAlumnos; i++)
    {

        cout << "Nombre del " << i + 1 << " alumno: " << alumnos[i].nombre << endl;
        cout << "Sexo del " << i + 1 << " alumno: " << alumnos[i].sexo << endl;
        cout << "Edad del " << i + 1 << " alumno: " << alumnos[i].edad << endl;
        cout.precision(3);
        cout << "Promedio del " << i + 1 << " alumno: " << alumnos[i].notaFinal << endl;
    }

    cout << "De alumnos ingresados, el alumno con mayor promedio es: " << alumnos[mejorNotaFinal].nombre << ", con un promedio de: " << alumnos[mejorNotaFinal].notaFinal << endl;

    return 0;
} */

/* 📌 73.  Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas. */

/* 📌 74. Comprobar si un número es par o impar, y señalar la posición de memoria donde se está guardando el número. Con punteros.
#include <iostream>
using namespace std;

int main()
{
    int numero, *punteroNumero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    punteroNumero = &numero;

    cout << "El numero se ha guardado en la posicion de memoria: " << punteroNumero << endl;

    if ((*punteroNumero % 2) == 0)
    {
        cout << "El numero es par.";
    }
    else
    {
        cout << "El numero es impar.";
    }

    return 0;
}*/

/* 📌 75. Determinar si un número es primo o no; con puteros y además indicar en qué posición de memoria se guardó el número.
#include <iostream>
using namespace std;

int main()
{
    int numero, *punteroNum, cont = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    punteroNum = &numero;
    cout << "El numero ingresado se almacena en la direccion: " << punteroNum << endl;

    for (int i = 1; i < *punteroNum; i++)
    {
        if (*punteroNum % i == 0)
        {
            cont++;
        }
    }

    if (cont > 2)
    {
        cout << "El numero " << *punteroNum << " no es un numero primo" << endl;
    }
    else
    {
        cout << "El numero " << *punteroNum << " es primo" << endl;
        cout << "Direccion: " << punteroNum << endl;
    }

    return 0;
} */

/* 📌 76. Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuales son números pares y su posición en memoria.
#include <iostream>
using namespace std;

void CargaManual(int vector[], int numeroDePosiciones, int &lenVector);
void NumeroEsPar(int lenVector, int *puntero);

int main()
{
    int numeros[10], *punteroNumero;
    int lenNumeros = 0;

    punteroNumero = numeros; // El puntero se ubica en la primera posición de memoria del vector, índice 0.
    CargaManual(numeros, 10, lenNumeros);
    NumeroEsPar(lenNumeros, punteroNumero);
    return 0;
}

void CargaManual(int vector[], int numeroDePosiciones, int &lenVector)
{
    for (int i = 0; i < numeroDePosiciones; i++)
    {
        cout << "Ingrese el valor a cargar en la " << i + 1 << " posicion: ";
        cin >> vector[i];
        lenVector++;
    }
}

void NumeroEsPar(int lenVector, int *puntero)
{
    for (int i = 0; i < lenVector; i++)
    {
        if (*puntero % 2 == 0)
        {
            cout << "El numero " << *puntero << " en la posicion " << i + 1 << " del vector, es par." << endl;
            cout << "Su posicion de memoria es: " << puntero << endl;
        }
        puntero++;
    }
} */

/* 📌 77. Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del vector.
#include <iostream>
using namespace std;

void CargaManual(int vector[], int numeroDePosiciones, int &lenVector);
void BuscarEnElVector(int lenVector, int valorABuscar, int *puntero);
int MenorElemento(int lenVector, int *puntero);

int main()
{
    int numeros[50], *punteroNumeros, cantidadDePosicionesNumeros, menorElemento;
    int lenNumeros = 0;

    cout << "Ingrese la cantidad de numeros a cargar en el vector: ";
    cin >> cantidadDePosicionesNumeros;

    CargaManual(numeros, cantidadDePosicionesNumeros, lenNumeros);

    punteroNumeros = numeros;

    menorElemento = MenorElemento(lenNumeros, punteroNumeros);

    cout << "El menor numero del vector es: " << menorElemento << endl;

    BuscarEnElVector(lenNumeros, menorElemento, punteroNumeros);

    return 0;
}

void CargaManual(int vector[], int numeroDePosiciones, int &lenVector)
{
    for (int i = 0; i < numeroDePosiciones; i++)
    {
        cout << "Ingrese el valor a cargar en la " << i + 1 << " posicion: ";
        cin >> vector[i];
        lenVector++;
    }
}

int MenorElemento(int lenVector, int *puntero)
{
    int menorNumero = 100000;
    for (int i = 0; i < lenVector; i++)
    {
        if (*puntero < menorNumero)
        {
            menorNumero = *puntero;
        }
        puntero++;
    }
    return menorNumero;
}

void BuscarEnElVector(int lenVector, int valorABuscar, int *puntero)
{
    for (int i = 0; i < lenVector; i++)
    {
        if (*puntero == valorABuscar)
        {
            cout << "Se encuentra en la " << i + 1 << " posicion del vector, y su direccion de memoria es: " << puntero;
        }
        puntero++;
    }
} */