#ifndef DYV_H
#define DYV_H
#include <iostream>
#include <vector>


int BusquedaBinaria(const std::vector<int>& arr, int buscar, int ini, int fin) {
    int minimo = ini;
    int maximo = fin;

    int medio = (minimo + maximo) / 2;
    if (arr[medio] == buscar) {
        return medio;
    }
    else if (arr[medio] < buscar) {
        return BusquedaBinaria(arr, buscar, medio + 1, maximo);
    }
    else {
        return BusquedaBinaria(arr, buscar, minimo, medio - 1);
    }

    return -1;
}

int BusquedaBinariaINV(const std::vector<int> &arr, int buscar, int ini, int fin) { // Arreglo en orden descendente
    int minimo = ini;
    int maximo = fin;

    int medio = (minimo + maximo) / 2;
    if (arr[medio] == buscar) {
        return medio;
    }
    else if (arr[medio] > buscar) {
        return BusquedaBinariaINV(arr, buscar, medio + 1, maximo);
    }
    else {
        return BusquedaBinariaINV(arr, buscar, minimo, medio - 1);
    }

    return -1;
}

    void QuickSort(std::vector<int> &v, int ini, int fin)
{
    if (ini < fin) {
        int pivot = v[fin];
        int i = ini;

        for (int j = ini; j < fin; j++) {
            if (v[j] <= pivot) {
                swap(v[i], v[j]);
                i++;
            }
        }
        swap(v[i], v[fin]);

        QuickSort(v, ini, i - 1);
        QuickSort(v, i + 1, fin);
    }
}

#endif