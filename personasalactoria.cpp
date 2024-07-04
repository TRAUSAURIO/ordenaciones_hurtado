#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// Función que retorna un nombre aleatoriamente de un vector de nombres
string NombreAleatorio(const vector<string>& nombres)
{
    if (nombres.empty()) {
        return ""; // Manejo de caso cuando el vector está vacío
    }
    int indiceAleatorio = rand() % nombres.size();
    return nombres[indiceAleatorio];
}

int main()
{
    srand(time(NULL)); // Inicializar la semilla para números aleatorios

    // Ejemplo para la función NombreAleatorio
    vector<string> nombres = {"Ana", "Juan", "Maria", "Pedro", "Luis", "Marta"};

    cout << "Nombre aleatorio: " << NombreAleatorio(nombres) << endl;

    return 0;
}
