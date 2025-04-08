#include <iostream>
#include "sorting.hpp"

int main() {
    std::cout << "2025 - Ordenamiento parte 1" << std::endl;

    int array[] = {10, 32, 5, 13, 42, 5, 99};
    int n = sizeof(array) / sizeof(array[0]);
    imprimir(array,n);
    burbuja(array, n);
    imprimir(array,n);
    int array_rec[] = {10, 32, 5, 13, 42, 5, 99};
    n = sizeof(array_rec) / sizeof(array_rec[0]);
    imprimir(array_rec,n);
    burbuja_recursivo(array_rec, n, 0);
    imprimir(array_rec,n);

    std::cout << "-----" << std::endl;

    int array2[] = {10, 32, 5, 13, 42, 5, 99};
    n = sizeof(array2) / sizeof(array2[0]);
    imprimir(array2,n);
    seleccion(array2, n);
    imprimir(array2,n);
    int array2_rec[] = {10, 32, 5, 13, 42, 5, 99};
    n = sizeof(array2_rec) / sizeof(array2_rec[0]);
    imprimir(array2_rec,n);
    seleccion_recursivo(array2_rec, n, 0);
    imprimir(array2_rec,n);

    std::cout << "-----" << std::endl;

    int array3[] = {10, 32, 5, 13, 42, 5, 99};
    n = sizeof(array3) / sizeof(array3[0]);
    imprimir(array3,n);
    insercion(array3, n);
    imprimir(array3,n);
    int array3_rec[] = {10, 32, 5, 13, 42, 5, 99};
    n = sizeof(array3_rec) / sizeof(array3_rec[0]);
    imprimir(array3_rec,n);
    insercion_recursivo(array3_rec, n, 1);
    imprimir(array3_rec,n);

    return 0;
}

