#include <iostream>
#include <cstring>
using namespace std;

void stergeSpatii (char sir[], int st, int dr) {

    char t[256]= {};
    int l = strlen(sir);
    if(st==0 || dr==l-1) {
        strcpy(t,sir+dr+1);
        strcpy(sir+st,t);
    } else {
        if(dr-st > 0) {

            strcpy(t,sir+dr+1);
            strcpy(sir+st+1,t);

        }


    }
}

int main() {
    char prop[256];
    cin.getline(prop,256);

    int st=-1,dr=-1;
    int lung=strlen(prop);

    for(int i=lung - 1; i >= 0; i--) {

        if(prop[i]==' ') {
            if(dr == -1)
                dr=i;
            st=i;
        } else {
            if(st!=-1 && dr!=-1) {
                stergeSpatii(prop, st, dr);

            }
            st=-1,dr=-1;
        }
    }

    if(st!=-1 && dr!=-1) {
        stergeSpatii(prop, st, dr);
    }

    cout<<prop;
    return 0;
}
