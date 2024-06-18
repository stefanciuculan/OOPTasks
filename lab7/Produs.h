#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Produs{
protected:
    char id[4]="000";

public:
    virtual double getVolum()=0;
    virtual void afis(){cout << "id: " << id << " ";}
    Produs()=default;
    Produs(char *ii){strcpy(id, ii);}
   // Produs(Produs &x){strcpy(this->id, x.id);}
    virtual ~Produs(){delete []id;}
};
