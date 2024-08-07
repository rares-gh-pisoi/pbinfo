#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("matrice.in");
ofstream fout("matrice.out");
int a[51][51];
int ap[51][51];
int b[51][51];
int main() {
    int n;
    fin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            fin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(j>i && j+i<n+1) {
                int aux=a[i][j];
                a[i][j]=a[n-i+1][j];
                a[n-i+1][j]=aux;
            }
            if(j<i && j+i<n+1) {
                if(a[i][j]>10) {
                    int cf=0;
                    int cnr=a[i][j];
                    while(cnr!=0) {
                        cf++;
                        cnr/=10;
                    }
                    while(cf>0) {
                        int cnr2=a[i][j];
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
                            ap[i][j]=1;
                            break;
                        }
                        cf--;
                    }
                }
            }
            if(j>i && j+i>n+1) {
                if(a[i][j]>10) {
                    int cf=0;
                    int cnr=a[i][j];
                    while(cnr!=0) {
                        cf++;
                        cnr/=10;
                    }
                    while(cf>0) {
                        int cnr2=a[i][j];
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
                            ap[i][j]=1;
                            break;
                        }
                        cf--;
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<i && j+i<n+1){
                if(ap[i][j]==1){
                    for(int s=1;s<=n;s++){
                        for(int f=1;f<=n;f++){
                            if(j>i && i+j>n+1){
                                if(ap[s][f]==1){
                                    int aux=a[s][f];
                                    a[s][f]=a[i][j];
                                    a[i][j]=aux;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<endl;
    }
    return 0;
}
