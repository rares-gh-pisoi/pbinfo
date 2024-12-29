#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("culori.in");
ofstream fout("culori.out");
int fr[1001];
int v[1000001];
int main()
{
    int n,k;
    fin>>n>>k;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    int xmax=-1;
    for(int i=1;i<=k;i++){
        fr[v[i]]++;
        xmax=max(xmax,fr[v[i]]);
    }
    for(int i=k+1;i<=n;i++)
    {
        fr[v[i-k]]--; /// il scot din secvennta
        fr[v[i]]++;/// il adaug in secventa
         xmax=max(xmax,fr[v[i]]);
    }
    fout<<xmax;
    return 0;
}
