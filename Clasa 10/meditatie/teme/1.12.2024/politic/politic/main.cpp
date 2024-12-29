#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("politic.in");
ofstream fout("politic.out");
int v[20001];
int par[20001];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    sort(v+1,v+n+1);
    int cons=1;
    int cnt=0;
    for(int i=2;i<=n;i++){
        if(v[i-1]+1==v[i]){
            cons++;
        }else{
           cnt++;
           par[cnt]=cons;
           cons=1;
        }
    }
    par[++cnt]=cons;
    int st=1;
    long long lg=0;
    int sum=0;
    for(int dr=1;dr<=cnt;dr++){
        sum+=par[dr];
        while(sum>n/2){
            sum-=par[st];
            lg+=cnt-dr+1;
            st++;
        }
    }
    fout<<cnt<<"\n"<<lg;
    return 0;
}
