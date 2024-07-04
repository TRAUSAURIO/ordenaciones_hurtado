// Autor: Ronald Elian Hurtado Jama
// Fecha: 03/07/2024
// Tema: Calcular elemento de N

#include <iostream>
using namespace std;

// Función que calcula la sumatoria de N elementos enteros
int SumarElementos(int x[], int total) {
    int suma = 0;
    for (int k = 0; k < total; k++) {
        suma += x[k];
    }
    return suma;
}

// Función que calcula el promedio de N elementos enteros
double CalcularPromedio(int x[], int total) {
    if (total == 0) return 0; // Evitar división por cero
    int suma = SumarElementos(x, total);
    return static_cast<double>(suma) / total;
}

// Función que ordena los elementos de un vector de forma secuencial
void OrdenSecuencial(int x[], int total) {
    for (int k = 0; k < total; k++) {
        for (int j = k + 1; j < total; j++) {
            if (x[k] > x[j]) {
                int aux = x[k];
                x[k] = x[j];
                x[j] = aux;
            }
        }
    }
}

// Función que imprime los elementos de un vector
void ImprimirVector(int x[], int total) {
    for (int k = 0; k < total; k++) {
        cout << endl << x[k];
    }
}

int main() {
    int x[] = {10, 6, 34, 4, 2, 7, 15, 1, 100, 56, 33};
    cout << endl << "Tamaño del vector: " << sizeof(x);
    cout << endl << "Tamaño del vector: " << sizeof(int);
    int MAX = sizeof(x) / sizeof(int);

    cout << endl << "Vector original";
    ImprimirVector(x, MAX);

    cout << endl << "Vector ordenado";
    OrdenSecuencial(x, MAX);
    ImprimirVector(x, MAX);

    int suma = SumarElementos(x, MAX);
    double promedio = CalcularPromedio(x, MAX);
    cout << endl << "La sumatoria de los elementos es: " << suma;
    cout << endl << "El promedio de los elementos es: " << promedio;

    return 0;
}
