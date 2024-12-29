#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("teatru.in");
ofstream fout("teatru.out");
char v[55001];
int fr[256];
int main()
{
    int n,c;
    fin>>n>>c;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    int st=1;
    int lmax=-1;
    int nr=0,a,b;
    for(int dr=1;dr<=n;dr++){
        fr[v[dr]]++;
        if(fr[v[dr]]==1){
            nr++;
        }
        while(nr>c){
            fr[v[st]]--;
            if(fr[v[st]]==0){
                nr--;
            }
            st++;
        }
        if(nr==c){
            if(dr-st+1>lmax){
                lmax=dr-st+1;
                a=st;
                b=dr;
            }
        }
    }
    fout<<lmax<<"\n";
    for(int i=a;i<=b;i++){
        fout<<v[i];
    }
    return 0;
}
