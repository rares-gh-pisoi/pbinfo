#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifrazecmax.in");
ofstream fout("cifrazecmax.out");
int v[10];
int b[10001];
int main()
{
    int n;
    int ord=1;
    while(fin>>n){
        int c=n/10%10;
        v[c]++;
        b[ord]=n;
        ord++;
    }
    int zmax=-1;
    for(int i=0;i<=9;i++){
        if(v[i]!=0){
            if(v[i]>zmax){
                zmax=v[i];
            }
        }
    }
    int nrc;
    for(int i=ord;ord>=2;i--){
        if(b[i]/10%10==b[i-1]/10%10){
            if(v[b[i]/10%10]==zmax){
                nrc=i;
                break;
            }
        }
    }
    fout<<nrc;
    return 0;
}
