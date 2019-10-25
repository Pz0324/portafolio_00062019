#include <iostream>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

class Lista{
private:
    nodo *pInicio;
    
public:
    Lista(void);
    void mostrarLista(void);
    void mostrarListaInverso(void);
    void mostrarListaInverso(nodo *);
    void agregar(int);
};

Lista::Lista(void) {
    pInicio = NULL;
}

void Lista::agregar(int dato) {
    nodo *p, *q;

    nodo *nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        p = pInicio;
        q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void Lista::mostrarLista(void) {
    nodo *s = pInicio;
    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
    }
}

void Lista::mostrarListaInverso(void) {
    mostrarListaInverso(pInicio);
}

void Lista::mostrarListaInverso(nodo *s) {
    if (s != NULL) {
        mostrarListaInverso(s->sig);
        cout << s->dato << " ";
    }
}


int main(void)
{
    Lista miLista;
    miLista.agregar(1);
    miLista.agregar(2);
    miLista.agregar(3);
    miLista.agregar(4);
    miLista.agregar(5);
    
    cout << "Items de la lista:" << endl;
    miLista.mostrarLista();
    cout << endl << "Items de la lista en orden inverso:" << endl;
    miLista.mostrarListaInverso();

    return 0;
}