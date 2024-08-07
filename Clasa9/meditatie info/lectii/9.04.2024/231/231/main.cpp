#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("exista.in");
ofstream fout("exista.out");
int a[11][11];
int v[11];
int main()
{
    int n,m,k;
    fin>>k>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    int ok=0;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=m;i++){
           if(a[i][j]==k){
            ok=1;
            v[j]=1;
           }
        }
    }
    if(ok==0){
        fout<<"NU EXISTA";
    }else{
        int s=0;
        for(int j=1;j<=n;j++){
            if(v[j]==1){
                s+=j;
            }
        }
        fout<<s;
    }
    return 0;
}
