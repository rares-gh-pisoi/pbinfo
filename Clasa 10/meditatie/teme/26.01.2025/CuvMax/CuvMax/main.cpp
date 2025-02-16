#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("cuvmax.in");
ofstream fout("cuvmax.out");
char c[256],t[256];
int nrCuvinte(char prop[256]) {
    int nrcuv=0;
    int ok=0;
    for(int k=0; c[k]!='\0'; k++) {
        if(c[k]>='a' && c[k]<='z'){
            ok=1;
        }else{
            if(ok==1){
                nrcuv++;
                ok=0;
            }
        }
    }
    return nrcuv;
}
int main() {
    int n;
    fin>>n;
    fin.get();
    int pmax=-1;
    for(int i=1; i<=n; i++) {
        fin.getline(c,256);
        int nr = nrCuvinte(c);
        if(pmax<nr){
            pmax=nr;
            strcpy(t,c);
        }

    }
    fout<<t;
    return 0;
}
