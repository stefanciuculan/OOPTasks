#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Produs{
protected:
    char *marca;
    int pret;

public:
    Produs();
    Produs(char *, int);
    Produs(const Produs &);
    Produs & operator=(const Produs &);
    ~Produs();
    friend ostream & operator<<(ostream &, const Produs &);
    friend istream & operator>>(istream &, Produs &);
};
