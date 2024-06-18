#include "Proprietate.h"

Proprietate::~Proprietate()
{
    delete []cod;
}

Proprietate::Proprietate(char *c, double v):valoare(v){
    strcpy(cod, c);
}

 void Proprietate::afisare(){
    cout<<"cod: "<<cod<<" valoare: "<<valoare<<'\n';
 }
