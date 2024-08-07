#include <iostream>

using namespace std;
/*
Cerința
Se apropie Crăciunul. Gigel a văzut la magazin trei jucării care îi plac: cel mai mult îi place o dronă,
care costă d lei, apoi îi place un robot care costă r lei, apoi o mașină care costă m lei, d > r > m.
De Crăciun Gigel merge la colindat la rude și va primi de la acestea S lei.
Aflați ce jucărie va cumpăra Gigel cu banii câștigați: drona, robotul, masina sau niciuna dintre ele!

Date de intrare
Programul citește de la tastatură numerele naturale S d r m.

Date de ieșire
Programul afișează pe ecran textul drona, robot, masina sau nimic.
*/
int main() {
    int S,d,r,m;
    cin>>S>>d>>r>>m;
    if (S>=d)
        cout<<"drona";
    else if (S>=r)
        cout<<"robot";
    else if(S>=m)
        cout<<"masina";
    else
        cout<<"nimic";


    return 0;
}
