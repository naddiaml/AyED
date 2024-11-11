// Directivas pre-compilado: ↓
#include <iostream> // Incluye la biblioteca "iostream"

using namespace std; // Le indica al compilador que debe buscar nombres de funciones, clases y otros identificadores usados dentro del espacio de nombres estándar o 'std' sin necesidad de calificarlos o agregarles el prefijo 'std::'.

// Otras directivas pre-compilado...

int main() // Declaración de la función principal
{                         
    cout << "Hola mundo"; // Esta linea de código usa el comando "cout" para producir una salida con el mensaje "Hola Mundo". Este comando es propio de la biblioteca iostream.
    // El comando "endl" hace un salto de línea. Comentar lo de arriba y revisar:
    cout << "Primera linea";
    cout << "Segunda linea" << endl;
    cout << "Ultima linea" << endl;
    return 0;
}

// ❗ Si la linea "using namespace std" no hubiese sido agregada al programa, el comando cout debería ser escrito como std::cout

// Este código, una vez compilado, puede ser ejecutado desde la terminal partiendo del archivo .exe correspondiente que se encuentra en la carpeta "output".