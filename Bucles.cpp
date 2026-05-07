#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingresa un numero para ver su tabla de multiplicar: ";
    cin >> numero;
    cout << "--- Tabla del " << numero << " ---" << endl;
    // Bucle que itera desde i=1 hasta i=10
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
    return 0;
}