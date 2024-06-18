#include "Produs.h"

class Electrocasnic : public Produs{
protected:
    int durata_garantie = 0;
public:
    Electrocasnic() = default;
    Electrocasnic(char *m, int p, int d):Produs(m, p),durata_garantie(d){}
    Electrocasnic(Electrocasnic &e):Produs(e),durata_garantie(e.durata_garantie){}
    void afisare(){
        cout << "Marca:" << marca << " Pret:" << pret << " Garantie:" << durata_garantie <<'\n';
    }
};
