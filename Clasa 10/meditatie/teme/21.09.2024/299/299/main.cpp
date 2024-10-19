#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sumsecv.in");
ofstream fout("sumsecv.out");
int v[101];
int sum[101];
int main()
{
    int n,m,p,q;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
        sum[i]=sum[i-1]+v[i];
    }
    fin>>m;
    for(int i=1;i<=m;i++){
        fin>>p>>q;
        if(p>q){
            swap(p,q);
        }
        fout<<sum[q]-sum[p-1]<<" ";
    }
    return 0;
}
