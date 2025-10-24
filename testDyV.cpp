#include <iostream>
#include <vector>
#include <chrono>
#include "DyV.h"
using namespace std;

int main()
{
    vector<int> datos = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int objetivo = 7;
    for (int i = 0; i < datos.size(); i++)
    {
        cout << datos[i] << " ";
    }
    cout << endl;
    int resultado = BusquedaBinaria(datos, objetivo, 0, datos.size() - 1);

    if (resultado != -1)
    {
        cout << "Elemento encontrado en el índice: " << resultado << endl;
    }
    else
    {
        cout << "Elemento no encontrado en el arreglo." << endl;
    }

    vector<int> datosDesordenados = {34, 7, 23, 32, 5, 62};
    cout << "Arreglo antes de QuickSort: ";
    for (int num : datosDesordenados)
    {
        cout << num << " ";
    }
    cout << endl;

	auto start = chrono::system_clock::now();

    QuickSort(datosDesordenados, 0, datosDesordenados.size() - 1);

	auto end = chrono::system_clock::now();

	chrono::duration<float, std::milli> duration = end - start;

	cout << "Time: " << duration.count() << "s" << std::endl;

    cout << "Arreglo después de QuickSort: ";
    for (int num : datosDesordenados)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
