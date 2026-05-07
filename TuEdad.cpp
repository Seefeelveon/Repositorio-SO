#include <iostream>
using namespace std;
int main() {
    int edad; // Declaracion de una variable entera
    cout << "Ingresa tu edad actual: ";
    cin >> edad; // El programa se pausa esperando la entrada del usuario
    int proximaEdad = edad + 1;
    cout << "El proximo anio tendras " << proximaEdad << " anios." << endl;
    return 0;
}