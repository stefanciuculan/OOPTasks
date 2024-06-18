#ifndef IMOBIL_H
#define IMOBIL_H

#include <Proprietate.h>


class Imobil : public Proprietate
{
    public:
        Imobil() = default;
        ~Imobil();
        Imobil(char *, double, double, char*);
        Imobil(const Imobil& other);
        Imobil& operator=(const Imobil& other);
        void afisare();
        int venit();

    protected:

    private:
        double venit_pe_an = 0;
        char *imbunatatiri = NULL;
};

#endif // IMOBIL_H
