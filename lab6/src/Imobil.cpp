#include "Imobil.h"

Imobil::~Imobil()
{
    delete []imbunatatiri;
}

Imobil::Imobil(const Imobil& other):Proprietate(other),venit_pe_an(other.venit_pe_an)
{
    if(other.imbunatatiri != NULL)
    {
        imbunatatiri = new char[strlen(other.imbunatatiri) + 1];
        strcpy(imbunatatiri, other.imbunatatiri);
    }
    else imbunatatiri = NULL;
}

Imobil::Imobil(char *c, double v, double vna, char* i):Proprietate(c, v), venit_pe_an(vna){
    if(i != NULL)
    {
        imbunatatiri = new char[strlen(i) + 1];
        strcpy(imbunatatiri, i);
    }
    else imbunatatiri = NULL;
}

Imobil& Imobil::operator=(const Imobil& rhs)
{
    if(this == &rhs)
        return *this;
    else{
        venit_pe_an = rhs.venit_pe_an;
        valoare  = rhs.valoare;
        strcpy(cod, rhs.cod);
        if(rhs.imbunatatiri != NULL)
        {
            imbunatatiri = new char[strlen(rhs.imbunatatiri) + 1];
            strcpy(imbunatatiri, rhs.imbunatatiri);
        }
        else
            imbunatatiri = NULL;
    }
    // handle self assignment
    //assignment operator
    return *this;
}

void Imobil::afisare(){
    Proprietate::afisare();
    cout<<"venit pe an: "<<venit_pe_an<<" imbunatatiri: "<<imbunatatiri<<'\n';
}

int Imobil::venit(){
    return venit_pe_an/12;
}

