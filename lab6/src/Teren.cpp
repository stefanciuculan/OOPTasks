#include "Teren.h"

Teren::~Teren()
{
    delete []descriere;
}

Teren::Teren(const Teren& other):Proprietate(other), venit_pe_luna_m2(other.venit_pe_luna_m2), suprafata(other.suprafata)
{
    if(other.descriere != NULL){
        descriere = new char[strlen(other.descriere) + 1];
        strcpy(descriere, other.descriere);
    }
}

Teren::Teren(char *c, double v, double vnl, double s, char *d):Proprietate(c, v), venit_pe_luna_m2(vnl), suprafata(s){
    if(d != NULL)
    {
        descriere = new char[strlen(d) + 1];
        strcpy(descriere, d);
    }
    else descriere = NULL;
}

void Teren::afisare(){
    Proprietate::afisare();
    cout<<"venit pe luna teren: "<<venit_pe_luna_m2<<" suprafata: "<<suprafata<<" descriere: "<<descriere<<'\n';
}

Teren& Teren::operator=(const Teren& rhs)
{
    if (this == &rhs)
        return *this;
    else{
        valoare  = rhs.valoare;
        strcpy(cod, rhs.cod);
        venit_pe_luna_m2 = rhs.venit_pe_luna_m2;
        suprafata = rhs.suprafata;

        if(rhs.descriere != NULL)
        {
            descriere = new char[strlen(rhs.descriere) + 1];
            strcpy(descriere, rhs.descriere);
        }
        else descriere = NULL;
    }
    // handle self assignment
    //assignment operator
    return *this;
}
int Teren::venit(){
    return venit_pe_luna_m2*suprafata;
}
