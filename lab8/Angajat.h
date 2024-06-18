#include "Persoana.h"

class Angajat:public Persoana{
     string firma=" "; //daca e formata din mai multe nume se foloseste -
     int salariu=0;
public:
    Angajat()=default;
    Angajat(string n, string pn, char i, string c, string f, int s):Persoana(n, pn, i, c), firma(f), salariu(s){}
    void citire(ifstream &i){
        Persoana::citire(i);
        i>>firma>>salariu;
    }
    void afisare(ofstream &o){
        Persoana::afisare(o);
        o<<"firma: "<<firma<<" salariu: "<<salariu<<endl;
    }
    int getVenit(){
        return salariu;
    }
}; //venit =salariu

