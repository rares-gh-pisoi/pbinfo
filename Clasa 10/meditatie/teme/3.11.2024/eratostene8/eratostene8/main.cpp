#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("eratostene8.in");
ofstream fout("eratostene8.out");

int fr[10000001], v[1000001];
int main()
{
    int n,t,a,b,x;
    fin>>n>>t;
    for(int i=1;i<=n;i++){
        fin>>x;  /// x e numar prim
        v[x]=1;
    }
    for(int i=1;i<=1000000;i++){
        /// marchez x si toti multiplii lui x cu 1
       if(v[i]==1  && fr[i]==0){
            fr[i]=1;
          for(int j=2*i;j<=10000000;j+=i)
            fr[j]=1;
       }

    }

    /// sume partaiale pe fr
    for(int i=3;i<=10000000;i++)
          fr[i]+=fr[i-1];
    for(int i=1;i<=t;i++){
        fin>>a>>b;
        fout<<fr[b]-fr[a-1]<<"\n";

    }
    return 0;
}
