#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;
    bool esPalindromo = true;

    cout << "Ingrese una palabra (sin espacios): ";
    cin >> palabra;

    int n = palabra.length();

    // Comparamos el primer caracter con el ultimo, el segundo con el penultimo, etc.
    for (int i = 0; i < n / 2; i++) {
        if (palabra[i] != palabra[n - 1 - i]) {
            esPalindromo = false;
            break; // Si un caracter no coincide, salimos del bucle
        }
    }

    if (esPalindromo) {
        cout << "La palabra \"" << palabra << "\" es un palindromo." << endl;
    } else {
        cout << "La palabra \"" << palabra << "\" no es un palindromo." << endl;
    }

    return 0;
}