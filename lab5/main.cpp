#include "TV.h"

int main()
{
    Produs x("abcd", 123);
    cout<<x;
    Electrocasnic e("abcd", 123, 12);
    e.afisare();
    TV t("abcd", 123, 12, 22.2, "televizor");
    t.afisare();

    TV *v;
    v = new TV[3];

    v[0]=TV("abcd", 123, 12, 22.2, "televizor");
    return 0;
}
