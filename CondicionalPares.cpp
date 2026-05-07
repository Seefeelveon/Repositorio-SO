#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Introduce un numero entero: ";
    cin >> numero;
    // Evaluamos la condicion: Si el residuo de dividir entre 2 es cero
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }
    return 0;
}