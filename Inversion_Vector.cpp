// Autor: Ronald Elian Hurtado Jama
// Fecha: 03/07/2024
// Tema: Inversión de vector

#include <iostream>
#include <vector>

using namespace std;

// Función que invierte el orden de los elementos de un vector
void InvertirVector(vector<int>& vec)
{
    int n = vec.size();
    for(int i = 0; i < n / 2; ++i)
    {
        int temp = vec[i];
        vec[i] = vec[n - i - 1];
        vec[n - i - 1] = temp;
    }
}

// Función que imprime un vector de enteros
void ImprimirVector(const vector<int>& x)
{
    for(int k = 0; k < x.size(); k++)
    {
        cout << x[k] << " ";
    }
    cout << endl;
}

int main()
{
    // Ejemplo para la función InvertirVector
    vector<int> numeros = {10, 3, 6, 78, 19, 100, 14};
    
    cout << "Vector original: ";
    ImprimirVector(numeros);
    
    InvertirVector(numeros);
    
    cout << "Vector invertido: ";
    ImprimirVector(numeros);

    return 0;
}
