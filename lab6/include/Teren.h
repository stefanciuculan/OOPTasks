#ifndef TEREN_H
#define TEREN_H

#include <Proprietate.h>


class Teren : public Proprietate
{
    public:
        Teren() = default;
        ~Teren();
        Teren(char *, double, double, double, char *);
        Teren(const Teren& other);
        Teren& operator=(const Teren& other);
        void afisare();
        int venit();

    protected:

    private:
        double venit_pe_luna_m2 = 0;
        double suprafata = 0;
        char *descriere = NULL;
};

#endif // TEREN_H
