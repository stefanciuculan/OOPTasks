#ifndef PROPRIETATE_H
#define PROPRIETATE_H

#include <iostream>
#include <cstring>

using namespace std;

class Proprietate
{
    public:
        Proprietate() = default;
        Proprietate(char *, double);
        virtual ~Proprietate();
        virtual void afisare();
        double get_valoare(){
            return valoare;
        }
        virtual int venit() {return 0;};

    protected:
        char cod[6] = " ";
        double valoare = 0;

    private:
};

#endif // PROPRIETATE_H
