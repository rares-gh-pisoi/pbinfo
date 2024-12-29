#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("jetoane.in");
ofstream fout("jetoane.out");
int v[50001];
int a[50001];
int main()
{
    int n,m,x;
    fin>>n>>m;
    for(int i=1;i<=n;i++){
        fin>>x;
        v[x]=1;
    }
    for(int i=1;i<=m;i++){
        fin>>x;
        a[x]=1;
    }
    int maxc;
    int minc=0;
    for(int i=1;i<=50000;i++){
        if(v[i]==1 && a[i]==1){
            if(minc==0){
                minc=i;
            }
            maxc=i;
        }
    }
    int j1=0,j2=0;
    for(int i=minc;i>=1;i--){
        if(v[i]==1)
            j1++;
        if(a[i]==1)
            j2++;
    }
    for(int i=maxc;i<=50000;i++){
        if(v[i]==1)
            j1++;
        if(a[i]==1)
            j2++;
    }
    fout<<minc<<" "<<maxc<<" ";
    if(j1==j2){
        fout<<"0";
    }else if(j1>j2){
        fout<<"1";
    }else{
        fout<<"2";
    }
    return 0;
}
