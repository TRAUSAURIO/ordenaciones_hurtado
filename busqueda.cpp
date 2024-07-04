// Autor: Ronald Elian Hurtado Jama
// Fecha: 03/07/2024
//Tema: Operador size_of


#include <iostream>
#include <ctime>
#include <cstdlib>
//diseñe la funcion que determine si un elemento existe dentro de un vector.

using namespace std;

// Función que ordena un vector de forma secuencial
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

// Función que imprime los elementos de un vector
void ImprimirVector(int x[], int total)
{
    for(int k = 0; k < total; k++)
    {
        cout << endl << x[k];
    }
}

// Función que llena un vector con números aleatorios
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

// Función que verifica si un elemento existe en el vector
bool ExisteEnVector(int x[], int total, int elemento)
{
    for(int k = 0; k < total; k++)
    {
        if(x[k] == elemento)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    srand(time(NULL));

    const int MAX = 50;
    int x[MAX];
    VectorNumAleatorios(x, MAX);

    cout << endl << "Vector original";
    ImprimirVector(x, MAX); // Imprimir el vector original

    cout << endl << "Vector ordenado";
    OrdenSecuencial(x, MAX);
    ImprimirVector(x, MAX); // Imprime el vector ordenado

    int elemento = 42; // Elemento a buscar
    if (ExisteEnVector(x, MAX, elemento))
    {
        cout << endl << "El elemento " << elemento << " existe en el vector.";
    }
    else
    {
        cout << endl << "El elemento " << elemento << " no existe en el vector.";
    }

    return 0;
}
