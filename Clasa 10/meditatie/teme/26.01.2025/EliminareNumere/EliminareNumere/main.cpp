#include <iostream>
#include <cstring>
using namespace std;

/**
* Sterge din sirul k de la st la dr.
*/
char stergereFractionar(char k[],int st,int dr) {
    char t[101];
    strcpy(t,k+dr+1);
    strcpy(k+st,t);

}

int esteCifra(char ch) {
    if((ch>='0' && ch<='9') || ch=='.')
            return 1;
    return 0;
}

int main() {
    // Citire prop
    char prop[101];
    cin.getline(prop,101);


    int st=-1,dr=-1;

    for(int i=0; prop[i]!='\0'; i++) {
        if(esteCifra(prop[i]) == 1) {
            if(st==-1)
                st=i;
            dr=i;
        }

        if(st!=-1 && (esteCifra(prop[i + 1]) == 0 || prop[i + 1] == '\0') )  {

//                cout << "Analizam cuvand sters: st: " << nrReal << ", st: " <<st<<", dr: "<<dr<<endl;
            char nrReal[101] = {};
            strncpy(nrReal, prop + st, dr - st + 1);
            if (strchr(nrReal, '.') != NULL) {
                stergereFractionar(prop,st,dr);

                i=i-(dr-st+1);
            }
            st = -1;
            dr = -1;
        }

    }

    cout<<prop;
    return 0;
}
