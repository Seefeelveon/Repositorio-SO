#include <iostream>
using namespace std;
int main() {
    // Declaracion e inicializacion de un arreglo de 5 enteros
    int notas[5] = {14, 16, 12, 18, 15};
    int suma = 0;
    // Los indices de los arreglos en C++ siempre comienzan en 0
    for (int i = 0; i < 5; i++) {
        suma = suma + notas[i]; // Acumulamos el valor de cada nota
    }
    int promedio = suma / 5;
    cout << "La suma total es: " << suma << endl;
    cout << "El promedio de las notas es: " << promedio << endl;
    return 0;
}