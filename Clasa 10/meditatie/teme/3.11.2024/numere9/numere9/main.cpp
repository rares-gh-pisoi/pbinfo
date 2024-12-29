#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere9.in");
ofstream fout("numere9.out");
int ap[60001];
int main()
{
    int n,x;
    fin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>x;
            if(x<=60000)
                ap[x]=1;
        }
    }
    int nmax;
    int nmin=0;
    for(int i=1;i<=n*n;i++){
        if(ap[i]==0 && i<=60000){
            nmax=i;
            if(nmin==0){
                nmin=i;
            }
        }
    }
    fout<<nmin<<" "<<nmax;
    return 0;
}
