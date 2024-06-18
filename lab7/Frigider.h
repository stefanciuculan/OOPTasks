#include "Produs.h"

class Frigider:virtual public Produs{
protected:
    double volum = 0;
    bool nofrost = false;

public:
    double getVolum(){ return volum; }
    void afis(){
        Produs::afis();
        cout << "volum: " << volum << " ";

        if(nofrost)
            cout << "nofrost: DA ";
        else
            cout << "nofrost: NU ";
    }
    Frigider()=default;
    Frigider(char *ii, double vol, bool nofr):Produs(ii),volum(vol),nofrost(nofr){};
    Frigider(Frigider &x){
        strcpy(id, x.id);
        volum = x.volum;
        nofrost = x.nofrost;
    }
};

