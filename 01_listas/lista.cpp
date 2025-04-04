//
// Created by Roberto Pablo Gomez on 26/03/2025.
//

#include "lista.hpp"
#include <iostream>

Lista::Lista() {
    comienzo = nullptr;
}

Lista::Lista(std::Nodo *n) {
    comienzo = n;
}

Lista::~Lista() {
    std::cout << "Llamando al destructor y liberando memoria..." << std::endl;
    std::Nodo* actual = comienzo;
    while (actual != nullptr) {
        std::Nodo* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

void Lista::agregar(int d) {
    auto *nuevo = new std::Nodo(d);
    nuevo->siguiente = comienzo;
    comienzo = nuevo;
}

bool Lista::es_vacia() {
    return comienzo == nullptr;
}

int Lista::cabeza() {
    if (es_vacia()) {
        return -1;
    }
    return comienzo->dato;
}

Lista *Lista::resto() {
    if (es_vacia()) {
        return nullptr;
    }
    return new Lista (comienzo->siguiente);
}

void Lista::imprimir() {
    if(resto() == nullptr) {
        return;
    }
    comienzo->imprimir();
    resto()->imprimir();
}


