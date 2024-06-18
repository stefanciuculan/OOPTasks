#include "Produs.h"


Produs::Produs(){
    marca = NULL;
    pret = 0;
}

Produs::Produs(char *m, int p){
    pret = p;
    if(m != NULL)
    {
        marca = new char[strlen(m) + 1];
        strcpy(marca, m);
    }
    else
        marca = NULL;
}

Produs::Produs(const Produs &x){
    pret = x.pret;
    if(marca != x.marca && x.marca != NULL)
    {
        marca = new char[strlen(x.marca) + 1];
        strcpy(marca, x.marca);
    }
    else
        marca = NULL;
}

Produs & Produs::operator=(const Produs &x){
    if(this != &x){
        pret = x.pret;
        marca = new char[strlen(x.marca) + 1];
        strcpy(marca, x.marca);
        return *this;
    }
    return *this;
}

Produs::~Produs(){
    delete []marca;
}

ostream &  operator<<(ostream & i, const Produs &x){
    i << "Marca este: ";
    if(x.marca != NULL)
        i << x.marca;
    else
        i << " ";

    i << '\n' << "Pretul este: " << x.pret << '\n';
}
istream &  operator>>(istream & o, Produs &x){
    cout << "Introduceti pretul: " << endl;
    o >> x.pret;

    char aux[256];
    cout << "Introduceti marca: " << endl;
    o >> aux;
    if(aux != NULL)
    {
        x.marca = new char[strlen(aux) + 1];
        strcpy(x.marca, aux);
    }
    else
        x.marca = NULL;

    return o;
}
