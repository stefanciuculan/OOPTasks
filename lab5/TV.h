#include "Electrocasnic.h"

class TV : public Electrocasnic{
    double diag = 0;
    char *descriere = NULL;
public:
    TV() = default;
    TV(char *, int , int , double, char*);
    TV(TV &);
    void afisare(){
        cout << "Marca:" << marca << " Pret:" << pret << " Garantie:" << durata_garantie << " Diagonala:" << diag << " descriere:" << descriere << '\n';
    }
    ~TV();
    void citire()
    {
        cout << "Marca:";
        cin >> marca;
        cout <<"pret:";
        cin >> pret;
        cout<<"durata garantie:";
        cin>>durata_garantie;
        cout<<"diagonala:";
        cin>>diag;
        cout<<"descriere:";
        cout<<descriere;
    }
};
