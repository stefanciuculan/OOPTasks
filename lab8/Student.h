#include "Persoana.h"

class Student: public Persoana{
    string facultate=" ";
    int note[6]={0,0,0,0,0,0};//notele pe semestrul trecut
public:
    Student()=default;
    Student(string n, string pn, char i, string c, string f, int no[6]):Persoana(n, pn, i, c), facultate(f){
        for(int i=0; i<6; i++)
            note[i]=no[i];
    }
    void citire(ifstream &i){
        Persoana::citire(i);
        i>>facultate;
        for(int j=0; j<6; j++)
            i>>note[j];
    }
    void afisare(ofstream &o){
        Persoana::afisare(o);
        o<<"facultate: "<<facultate<<" note: ";
        for(int j=0; j<6; j++)
            o<<note[j]<<" ";
        o<<endl;
    }
    int getVenit(){
        int m;
        m=(note[0]+note[1]+note[2]+note[3]+note[4]+note[5])/6;
        if(m>8.5)
            return 700;
        else return 0;
    }
}; //daca media notelor>8.5 si nu are restante, atunci are bursa 700 => venit=700, altfel 0


