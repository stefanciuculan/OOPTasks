#include "Frigider.h"
#include "Lada_Frig.h"

class Combina:public Frigider, public Lada_Frig{
    char *info_sup = NULL;

public:
    Combina() = default;
    Combina(char *ii, double vol, bool nofr, double d[], char *t, char *info_sup):Lada_Frig(ii, d, t), Frigider(ii, vol, nofr), Produs(ii){

    };
    Combina(Combina &x):Lada_Frig(x), Frigider(x), Produs(x){
        info supl
    }

    op=
    destr
    void afis(){
        Frigider::afis();
        cout << "dimensiuni: " << dim[0] << "x" << dim[1] << "x" << dim[2] << " tip: " << tip << " ";
    }

    double getVolum(){
        return volum + dim[0] * dim[1] * dim[2];
    }
};
