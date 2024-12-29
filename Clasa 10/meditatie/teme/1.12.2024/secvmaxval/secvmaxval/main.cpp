#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secvmaxval.in");
ofstream fout("secvmaxval.out");
int v[200001];
int main()
{
    int n;
    long long val,sum=0;
    fin>>n>>val;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    int secvmax=-1;
    int st=1;
    for(int dr=1;dr<=n;dr++){
        sum+=v[dr];
        while(sum>val){
            sum-=v[st];
            st++;
        }
        secvmax=max(secvmax,dr-st+1);
    }
    fout<<secvmax;
    return 0;
}
