#include <iostream>
#include "ListaSimple.h"

using namespace std;

int main(){
    ListaSimple lista;
    lista.agregarNodo(201403770, "edgar");
    lista.agregarNodo(201403771, "ovidio");
    lista.agregarNodo(201403772, "ed");
    lista.agregarNodo(201403773, "pe");

    cout << "nodos agregadodos correctamente" <<endl;

    lista.imprimir();

    lista.buscar(201403773);
    lista.agregarNodo(20145872,"pepito");
    lista.eliminar(201403770);
    lista.imprimir();

    return 0;
}
