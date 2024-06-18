#include "Produs.h"

class Lada_Frig:virtual public Produs{
protected:
    double dim[3];
    char *tip;

public:
    Lada_Frig():Produs(){
        dim[0] = 0;
        dim[1] = 0;
        dim[2] = 0;

        tip = NULL;
    }

    Lada_Frig(char *ii, double d[], char *t):Produs(ii){
        dim[0] = d[0];
        dim[1] = d[1];
        dim[2] = d[2];

        if(t != NULL)
        {
            tip = new char[strlen(t) + 1];
            strcpy(tip, t);
        }
        else tip = NULL;
    }

    Lada_Frig(Lada_Frig &x){
        strcpy(id, x.id);

        dim[0] = x.dim[0];
        dim[1] = x.dim[1];
        dim[2] = x.dim[2];

        if(x.tip != NULL)
        {
            tip = new char[strlen(x.tip) + 1];
            strcpy(tip, x.tip);
        }
        else tip = NULL;
    }

    void afis(){
        Produs::afis();
        cout << "dimensiuni: " << dim[0] << "x" << dim[1] << "x" << dim[2] << " tip: " << tip << " ";
    }

    double getVolum(){
        return dim[0] * dim[1] * dim[2];
    }

    ~Lada_Frig(){
        delete []tip;
    }
};
