#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("divizori4.in");
ofstream fout("divizori4.out");
bool ciur[100001];
int nrprime[10001],lp;

void eratostene(){

    for(int i=2;i<=100000;i++)
    {
        if(ciur[i]==0){
            nrprime[++lp]=i;
            for(int j=i*2;j<=100000;j+=i){
                ciur[j]=1;
            }
        }

    }

}
int nrdiv(int n){
    int pr=1;
    for(int i=1;i<=lp&&nrprime[i]*nrprime[i]<=n;i++){
        if(n%nrprime[i]==0){
            int nrd=0;
            while(n%nrprime[i]==0){
                nrd++;
                n/=nrprime[i];
            }
            pr*=(nrd+1);
        }
    }
    if(n!=1){
        pr*=2;
    }
    return pr;
}
int cmp(int a,int b){
    return a>b;
}
int v[50001];
int c[50001];
int w[50001];
int main()
{
    int n,cer,p;
    fin>>n>>cer;
    eratostene();
    for(int i=1;i<=n;i++){
        fin>>v[i];
        c[i]=nrdiv(v[i]);
    }
    fin>>p;
    if(cer==1){
        fout<<c[p];
        return 0;
    }
    int pz=0;
    for(int i=1;i<=n;i++){
        if(c[i]==c[p]){
            pz++;
            w[pz]=v[i];

        }
    }
    sort(w+1,w+pz+1);
    for(int i=pz;i>=1;i--){
        fout<<w[i]<<" ";
    }
    return 0;
}
