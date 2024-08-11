#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("matrice.in");
ofstream fout("matrice.out");
int a[51][51];
int ap[51][51];
int b[51][51];
int i,j;
int superprim(int x) {

    int cf=0;
    int cnr=x;
    while(cnr!=0) {
        cf++;
        cnr/=10;
    }
    while(cf>0) {
        int cnr2=x;
        int nr=0;
        int p=1;
        while(cnr2>9) {
            int c=cnr2%10;
            cnr2/=10;
            nr=c*p+nr;
            p*=10;

        }
        nr=nr*10+cnr2;
        int prim=1;
        for(int d=2; d*d<=nr; d++) {
            if(nr%d==0) {
                prim=0;
                break;
            }
        }
        if(prim==1) {
            return 1;
        }
        cf--;
    }


    return 0;
}


int main() {
    int n;
    fin>>n;
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            fin>>a[i][j];
        }
    }
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            if(j>i && j+i<n+1) {
                int aux=a[i][j];
                a[i][j]=a[n-i+1][j];
                a[n-i+1][j]=aux;
            }
            if(j<i && j+i<n+1) {
                if(superprim(a[i][j]) == 1 && superprim(a[i][n-j+1]) == 1) {
                     int aux=a[i][j];
                    a[i][j]=a[i][n-j+1];
                    a[i][n-j+1]=aux;
                }
            }
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<endl;
    }
    return 0;
}
