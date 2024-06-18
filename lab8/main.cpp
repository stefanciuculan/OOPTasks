#include "Angajat.h"
#include "Student.h"

using namespace std;

//ofstream f("studenti.dat",ios::out | ios::app);
//ofstream g("Angajati.dat",ios::out | ios::app);
ifstream f("studenti.dat",ios::in);
ifstream g("Angajati.dat",ios::in);
ofstream h("Persoane.dat",ios::out);
int main()
{
Persoana **v = new Persoana* [6];
//    int v[6]={5,7,10,8,9,2};
//    Angajat a1("nume2","prenume2",'a',"cnp2","firma",10);
//    Angajat a2("nume3","prenume3",'b',"cnp3","firma1",20);
//    Angajat a3("nume4","prenume4",'c',"cnp4","firma2",80);
//    a1.afisare(g);
//    a2.afisare(g);
//    a3.afisare(g);
//    Student s1("nume","prenume",'x',"cnp","facultate",v);
//    Student s2("nume2","prenume2",'y',"cnp2","facultate1",v);
//    Student s3("nume3","prenume3",'z',"cnp3","facultate2",v);
//    s1.afisare(f);
//    s2.afisare(f);
//    s3.afisare(f);
    for(int i=0; i<3; i++)
    {
        v[i]=new Student();
        v[i]->citire(f);
    }
    for(int i=3; i<6; i++)
    {
        v[i]=new Angajat();
        v[i]->citire(g);
    }
    for(int i=0; i<6; i++){
        if(v[i]->getPrenume().find("Ana")!=string::npos)
            v[i]->afisare(h);
    }
    int maxv=0;
    Persoana **p=new Persoana*[1];
    for(int i=0; i<6; i++){
        if(v[i]->getVenit()>maxv)
            p=v[i];
    }
    p.afisare(h);
    return 0;
}
