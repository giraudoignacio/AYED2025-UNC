//
// Created by Roberto Pablo Gomez on 26/03/2025.
//

#ifndef LISTAS_LISTA_HPP
#define LISTAS_LISTA_HPP

#include "nodo.hpp"

class Lista {
public:
    Lista ();
    Lista (std::Nodo *n);
    ~Lista();
    void agregar (int d);
    bool es_vacia ();
    int cabeza ();
    Lista *resto ();
    void imprimir();
private:
    std::Nodo *comienzo;
};


#endif //LISTAS_LISTA_HPP
