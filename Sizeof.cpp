// Autor: Ronald Elian Hurtado Jama
// Fecha: 03/07/2024
//Tema: Operador size_of


#include <iostream>

void OrdenSecuencial(int x[], int total)
{
    for(int k=0; k < total; k++)
    {
        for(int j = k+1; j < total; j++)
        {
            if(x[k] > x[j])
            {
                //intercambiar los valores
                int aux = x[k];
                x[k] = x[j];
                x[j] = aux;
            }
        }
    }
}
void ImprimirVector(int x[], int total)
{
    for(int k=0; k < total; k++)
    {
       std::cout<<std::endl<<x[k];
    }
}

int main()
{
    
    
    int x[] = {10, 6, 34, 4, 2, 7, 15, 1, 100, 56, 33};
    std::cout<<std::endl<<"Tamaño del vector "<<sizeof(x);
    std::cout<<std::endl<<"Tamaño del vector "<<sizeof(int);
    int MAX = sizeof(x) / sizeof(int);

    std::cout<<std::endl<<"Vector original";
    ImprimirVector(x, MAX);//Imprimir el vector original
    std::cout<<std::endl<<"Vector ordenado";
    OrdenSecuencial(x, MAX);
    ImprimirVector(x, MAX);//Imprime el vector ordenado

    return 0;
}