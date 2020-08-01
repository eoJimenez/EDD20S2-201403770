#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include <string>
using namespace std;

class NodoSimple;

class ListaSimple
{
    public:
        ListaSimple();

        NodoSimple *primero, *ultimo;
        void agregarNodo(int carne, string nombre);
        void imprimir();
        int buscar(int carne);
        void eliminar(int carne);

        virtual ~ListaSimple();

    protected:

    private:
};

class NodoSimple
{
    public:
        NodoSimple* siguiente;
        int carne;
        string nombre;

        NodoSimple(int, string);
        //virtual ~NodoSimple();

    protected:

    private:

};

#endif // LISTASIMPLE_H
