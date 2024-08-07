#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("bete1.in");
ofstream fout("bete1.out");
int main()
{
    int N;
    fin>>N;
    int si;
    int smax;
    int amin=INT_MAX;
    int amax=INT_MIN;
    int bmax=INT_MIN;
    int cnt;
    int cma=0;
    int cmb=0;
    for(int i=1;i<=N;i++){
        int a;
        fin>>a;
        if(a<amin){
            amin=a;
        }
        if(a>amax){
            amax=a;
            cma=1;
        }else{
            if(a==amax){
                cma++;
            }
        }
    }
    for(int j=1;j<=N;j++){
        int b;
        fin>>b;
        if(b>bmax){
            bmax=b;
            cmb=1;
        }else{
            if(b==bmax){
                cmb++;
            }
        }
    }
    si=amin+bmax;
    smax=amax+bmax;
    if(cma<cmb){
        cnt=cma;
    }else{
        cnt=cmb;
    }
    fout<<si<<"\n"<<smax<<"\n"<<cnt;
    return 0;
}
