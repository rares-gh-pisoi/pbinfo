#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("matrice.in");
ofstream fout("matrice.out");
int prim(int n){
    if(n<2)
        return 0;
    for(int d=2;d*d<=n;d++){
        if(n%d==0){
            return 0;
        }
    }
    return 1;
}


int superprim(int n) {
    if(prim(n)==1)
        return 1;
    int cf=0;
    int p=1;
   int x=n;
    while(x>9){
        cf++;
        p*=10;
        x/=10;
    }
    for(int i=1;i<=cf;i++){
        n=n%p*10+n/p;
        if(prim(n)==1){
            return 1;
        }
    }
    return 0;


}
int a[51][51];
int main() {
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }

    for(int i=1;i<=n/2;i++)
        for(int j=i+1;i+j<n+1;j++)
            swap(a[i][j],a[n+1-i][j]);

    for(int j=1;j<=n/2;j++)
        for(int i=j+1;i+j<n+1;i++)
           if(superprim(a[i][j])&&superprim(a[i][n-j+1]))
            swap(a[i][j],a[i][n-j+1]);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<"\n";
    }
    return 0;
}
