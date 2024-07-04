// Autor: Ronald Elian Hurtado Jama
// Fecha: 03/07/2024
// Tema: Ordenacion secuencial e impresión de barras verticales

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void OrdenSecuencial(int x[], int total)
{
    for(int k = 0; k < total; k++)
    {
        for(int j = k + 1; j < total; j++)
        {
            if(x[k] > x[j])
            {
                // Intercambiar los valores
                int aux = x[k];
                x[k] = x[j];
                x[j] = aux;
            }
        }
    }
}

void ImprimirVector(int x[], int total)
{
    for(int k = 0; k < total; k++)
    {
        cout << endl << x[k];
    }
}

void VectorNumAleatorios(int x[], int total)
{
    int limite_inferior = 1;
    int limite_superior = 100;
    for(int k = 0; k < total; k++)
    {
        int numero = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);
        x[k] = numero;
    }
}

// Función que imprime una barra vertical por cada elemento del vector
void ImprimirBarras(int x[], int total)
{
    for(int i = 0; i < total; ++i)
    {
        for(int j = 0; j < x[i]; ++j)
        {
            cout << "* ";
        }
        cout << "(" << x[i] << ")" << endl;
    }
}

int main()
{
    srand(time(NULL));

    const int MAX = 50;
    int x[MAX];
    VectorNumAleatorios(x, MAX);

    cout << endl << "Vector original:";
    ImprimirVector(x, MAX); // Imprimir el vector original

    cout << endl << "Vector ordenado:";
    OrdenSecuencial(x, MAX);
    ImprimirVector(x, MAX); // Imprime el vector ordenado

    cout << endl << "Barras verticales:";
    ImprimirBarras(x, MAX); // Imprime barras verticales

    return 0;
}
