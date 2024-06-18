#include <iostream>
#include <vector>

using namespace std;

class P{
public:
    virtual int getPret() = 0;
    virtual void afis() = 0;
    virtual ~P(){};
};

class Piesa : public P
{
    int pret ;
    string cod;
public:
    Piesa(int p, string c):pret(p), cod(c){}
    int getPret(){
        return pret;
    }

    void afis(){
        cout << "cod piesa: " << cod << " pret piesa: " << pret << '\n';
    }
};

class Produs_hardware : public P
{ protected:
    vector<Piesa> vec;  //vector piese
    int pret_manopera; //pret manopera pe ora
    int  ore; //ore dezvoltare
public:
    Produs_hardware(vector<Piesa> v, int p, int o):vec(v), pret_manopera(p), ore(o){}

    int getPret(){
        int sum = 0;

        vector<Piesa>::iterator i;
        for(i = vec.begin(); i < vec.end(); i++)
            sum = sum + (*i).getPret();
        return sum + pret_manopera * ore;
    }

    void afis(){
        cout << "pret manopera: " << pret_manopera << " ore: " << ore << '\n';

        vector<Piesa>::iterator i;
        for(i = vec.begin(); i != vec.end(); i++)
            (*i).afis();
    }
};// pret=suma preturilor pieselor+pret_manopera*ore

class Produs_hardware_cu_instalare : public Produs_hardware{
private:
    int cost_instalare;
    vector<string> functionalitati;
    int nr_functionalitati;// poate sa lipseasca
public:
    Produs_hardware_cu_instalare(vector<Piesa> v, int p, int o, int c, vector<string> f, int nf):Produs_hardware(v, p, o), cost_instalare(c), functionalitati(f), nr_functionalitati(nf){}

    int getPret(){
        return cost_instalare * nr_functionalitati + Produs_hardware::getPret();
    }

    void afis(){
        Produs_hardware::afis();
        cout << "cost instalare: " << cost_instalare << " numar functionalitati: " << nr_functionalitati << '\n';

        vector<string>::iterator i;
        for(i = functionalitati.begin(); i != functionalitati.end(); i++)
            cout << *i << " ";
    }
};    //pret = cost_instalare * nr_functionalitati+pret produs_hardware


int main()
{
    vector<string> s;
    s.push_back("funct1");
    s.push_back("funct2");
    s.push_back("funct3");

    vector <Piesa> vec;
    vec.push_back(Piesa(22, "948d"));
    vec.push_back(Piesa(432, "ooie9"));
    vec.push_back(Piesa(11, "4378oop"));

    vector <P*> v;
    v.push_back(new Piesa(450, "ufw31"));
    v.push_back(new Produs_hardware(vec, 1000, 5));
    v.push_back(new Produs_hardware_cu_instalare(vec, 670, 3, 220, s, 3));

    vector <P*>:: iterator i,max;
    for(i = v.begin(); i != v.end(); i++)
        (*i)->afis();

    int pmax = 0;
    for(i = v.begin(); i != v.end(); i++)
    {
        if((*i)->getPret() > pmax)
            pmax = (*i)->getPret();
            max=i;
    }
    (*max)->afis();

    v.pop_back();
    v.pop_back();
    for(i = v.begin(); i != v.end(); i++)
        (*i)->afis();

    v.insert(v.begin(), new Piesa(234, "789ooz"));
    for(i = v.begin(); i != v.end(); i++)
        (*i)->afis();
    return 0;
}
