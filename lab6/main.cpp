#include "Proprietate.h"
#include "Imobil.h"
#include "Teren.h"

int main()
{
    Proprietate p = Proprietate("567t", 12000);
    Imobil i = Imobil("3425", 754.38, 234.50, "chiuveta");
    Teren t = Teren("yt45", 222.22, 22.22, 500, "teren");
    p.afisare();
    i.afisare();
    t.afisare();

    Proprietate **v = new Proprietate*[3];
    v[0] = &p;
    v[1] = new Imobil("3425", 754.38, 234.50, "chiuveta");
    v[2] = new Teren("yt45", 222.22, 22.22, 500, "teren");
    v[0]->afisare();
    v[1]->afisare();
    v[2]->afisare();

    return 0;
}
