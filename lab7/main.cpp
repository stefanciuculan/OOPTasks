#include "Combina.h"

using namespace std;

int main()
{
    double dim[3], dim1[3];
    dim[0] = 10.5;
    dim[1] = 11.1;
    dim[2] = 5.9;
    dim1[0] = 8.5;
    dim1[1] = 19.1;
    dim1[2] = 6.9;
    Produs **v = new Produs *[3];
    v[0] = new Frigider("231", 100, true);
    v[1] = new Lada_Frig("551", dim, "tip_nou");
    v[2] = new Combina("435", 200, false, dim1, "tip_vechi", "chestii");
    v[0]->afis();
    cout << '\n';
    v[1]->afis();
    cout << '\n';
    v[2]->afis();
    cout << '\n';

/*     for(int i = 0; i < 3; i++)
 *     {
 *         for(int j = i + 1; j < 3; j++)
 *         {
 *             if(v[i]->getVolum() > v[j]->getVolum()){
 *                 Produs *aux;
 *                 aux = v[i;
 *             }
 *         }
 *     }
 */
    return 0;
}
