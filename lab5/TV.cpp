#include "TV.h"

TV :: TV(char *m, int p , int d, double dia, char *descr) : Electrocasnic(m, p, d), diag(dia){
    if(descr == NULL)
        descriere = NULL;
    else
    {
        descriere = new char[strlen(descr) + 1];
        strcpy(descriere, descr);
    }
}

TV :: TV(TV &x) : Electrocasnic(x), diag(x.diag){
    if(x.descriere == NULL)
        descriere = NULL;
    else
    {
        descriere = new char[strlen(x.descriere) + 1];
        strcpy(descriere, x.descriere);
    }
}

TV :: ~TV(){
    delete []descriere;

}
