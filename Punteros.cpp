#include <iostream>

using namespace std;

int main() {
    // 1. Declaramos variables normales
    int a = 10;
    int b = 20;

    // 2. Declaramos un puntero con el operador '*'
    // El puntero 'ptr' guardará la dirección de memoria de 'a'
    int* ptrA = &a; // '&' obtiene la dirección de la variable
    int* ptrB = &b;

    cout << "--- ESTADO INICIAL ---" << endl;
    cout << "Variable A: " << a << " | Direccion en RAM: " << ptrA << endl;
    cout << "Variable B: " << b << " | Direccion en RAM: " << ptrB << endl;

    // 

    // 3. El Intercambio usando Desreferenciación
    // Usamos '*' delante del puntero para acceder al VALOR que hay en esa dirección
    int temporal = *ptrA; // Guardamos el 10
    *ptrA = *ptrB;        // Ponemos el valor de B (20) en la dirección de A
    *ptrB = temporal;     // Ponemos el 10 en la dirección de B

    cout << "\n--- DESPUES DEL INTERCAMBIO ---" << endl;
    cout << "Variable A ahora vale: " << a << endl;
    cout << "Variable B ahora vale: " << b << endl;

    return 0;
}
