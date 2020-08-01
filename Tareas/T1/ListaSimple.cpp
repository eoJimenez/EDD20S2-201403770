#include "ListaSimple.h"
#include <string>
#include <iostream>

using namespace std;

ListaSimple::ListaSimple()
{
    primero = NULL;
    ultimo = primero;
}
///AGREGAR NODOS A LA LISTA SIMPLE
void ListaSimple::agregarNodo(int c, string s)
{
    if(primero != NULL)
    {
        ultimo->siguiente = new NodoSimple(c,s);
        ultimo = ultimo->siguiente;
    }
    else
    {
        primero = new NodoSimple(c,s);
        ultimo = primero;
    }
}
///MÉTODO QUE RECORRE LA LISTA E IMPRIME LOS DATOS ALMACENADOS EN ELLA
void ListaSimple::imprimir()
{
    NodoSimple *temporal = primero;
    while(temporal != NULL)
    {
        cout << temporal->carne <<"," << temporal->nombre <<endl;
        temporal = temporal->siguiente;

    }
}
///MÉTODO QUE BUSCA POR MEDIO DEL CARNE
int ListaSimple::buscar(int c)
{
    NodoSimple *actual = primero;
    bool encontrado = false;
    if(primero != NULL)
    {
        while(actual != NULL && encontrado != true)
        {
            if(actual->carne == c)
            {
                encontrado = true;
                cout << "el carne si existe " << c << endl;
                //return c;
            }
            actual = actual->siguiente;
        }
        if(!encontrado)
        {
            cout<< "carne no encontrado"<< endl;
        }
    }
    else
    {
        cout << "\n Lista Vacia \n\n";
        //return 0;
    }
}
void ListaSimple::eliminar(int c)
{
    NodoSimple *aux = primero;
    //NodoSimple *anterior = new NodoSimple();
    NodoSimple *anterior = NULL;
    bool encontrado = false;
    if(primero != NULL)
    {
        while(aux != NULL && encontrado != true)
        {
            if(aux->carne == c)
            {
                cout << "\n carne encontrado para eliminar ( "<<c<<") ";
                if(aux == primero)
                {
                    primero = primero->siguiente;
                }else if(aux == ultimo)
                {
                    anterior->siguiente = NULL;
                    ultimo = anterior;
                }
                else
                {
                    anterior->siguiente = aux->siguiente;

                }
                cout << "\n Nodo eliminado de la lista " << c <<endl;
                encontrado = true;
            }
            anterior = aux;
            aux = aux->siguiente;
        }
        if(!encontrado)
        {
            cout << "\n Caracter no encontrado\n\n";
        }
    }
    else
    {
        cout << "\n La lista se encuentra vacia\n\n";
    }
}
///DESTRUCTOR CLASE LISTA; NO UTILIZADO
ListaSimple::~ListaSimple()
{
    //dtor
}
///CONSTRUCTOR DE LA CLASE NODOSIMPLE
NodoSimple::NodoSimple(int c,string s)
{
    siguiente = NULL;
    carne = c;
    nombre = s;
}
