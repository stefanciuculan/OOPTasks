#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Persoana{
     string nume=" ", prenume=" ";//mai multe prenume sunt unite prin -
     char initiala=' ';
     string CNP=" ";
public:
     Persoana()=default;
     Persoana(string n, string pn, char i, string c):nume(n), prenume(pn), initiala(i), CNP(c){}
     virtual void citire(ifstream &i){
        i>>nume>>prenume>>initiala>>CNP;
     }
     virtual void afisare(ofstream &o){
        o<<nume<<" "<<prenume<<" "<<initiala<<" "<<CNP<<" ";
     }
     string getPrenume(){
        return prenume;
     }
     virtual int getVenit()=0;
 };

