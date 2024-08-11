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
                    break;
                }
            }
            if(fct==0)
                break;
        }
        if(fct==1) {
            k[nrc]=fct;
        } else {
            // verificare cartela rotita la 90 de grade
            fct=1;
            for(int j=n; j>=1; j--) {
                for(int i=1; i<=n; i++) {
                    if(a[i][n+1-j]!=v[i][j]) {
                        fct=0;
                        break;
                    }
                }
                if(fct==0) {
                    break;
                }
            }
            if(fct==1) {
                k[nrc]=fct;
            } else {
                fct=1;
                for(int i=n; i>=1; i--) {
                    for(int j=n; j>=1; j--) {
                        if(a[i][j]!=v[n+1-i][n+1-j]) {
                            fct=0;
                            break;
                        }
                    }
                    if(fct==0) {
                        break;
                    }
                }
                if(fct==1) {
                    k[nrc]=fct;
                } else {
                    fct=1;
                    for(int j=1; j<=n; j++) {
                        for(int i=n; i>=1; i--) {
                            if(a[i][j]!=v[n+1-i][j]) {
                                fct=0;
                                break;
                            }
                        }
                        if(fct==0) {
                            break;
                        }
                    }
                    k[nrc]=fct;
                }
                if(fct==1) {
                    k[nrc]=fct;
                } else {
                    for(int i=1; i<=n; i++) {
                        for(int j=1; j<n/2+1; j++) {
                            int aux=v[i][j];
                            v[i][j]=v[i][n-j+1];
                            v[i][n-j+1]=aux;
                        }
                    }
                    for(int i=1; i<=n; i++) {
                        for(int j=1; j<n/2+1; j++) {
                            if(a[i][j]!=v[i][j]) {
                                fct=0;
                                break;
                            }
                        }
                    }
                    if(fct==1) {
                        k[nrc]=fct;
                        break;
                    } else {
                        for(int j=n; j>=1; j--) {
                            for(int i=1; i<=n; i++) {
                                if(a[i][n+1-j]!=v[i][j]) {
                                    fct=0;
                                    break;
                                }
                            }

                        }
                        if(fct==1){
                            k[]
                        }
                    }
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



