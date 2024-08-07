#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cartele.in");
ofstream fout("cartele.out");
int a[51][51];
int v[51][51];
int k[51];
int main() {
    int n,c;
    fin>>n>>c;
    // citim sablonul
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            fin>>a[i][j];
        }
    }
    int nrc=1;
    while(nrc<=c) {

        //citim cartela curenta
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                fin>>v[i][j];
            }
        }
        // verificam daca cartela,nerotita, se potriveste sablonului
        int fct=1;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(a[i][j]!=v[i][j]) {
                    fct=0;
                }
                if(fct==1) {
                    k[nrc]=1;
                    break;
                } else {
                    fct=1;
                    if(a[i][j]!=v[i][n+1-j]) {
                        fct=0;
                    }
                    if(fct==1) {
                        k[nrc]=1;
                    } else {
                        fct=1;
                        if(a[i][j]!=v[n+1-i][n+1-j]) {
                            fct=0;
                        }
                        if(fct==1) {
                            k[nrc]=1;
                        } else {
                            fct=1;
                            if(a[i][j]!=v[n+1-i][j]) {
                                fct=0;
                            }
                            if(fct==1){
                                k[nrc]=1;
                            }
                        }
                    }
                }
                if(fct==0){
                    k[nrc]=0;
                    break;
                }
            }
        }
        nrc++;

    }
    for(nrc=1; nrc<=c; nrc++) {
        fout<<k[nrc]<<endl;
    }
    return 0;
}
