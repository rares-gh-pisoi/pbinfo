#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("arhitectura2.in");
ofstream fout("arhitectura2.out");
int fr[100001],v[2000001];
int main()
{
    int n,c,hmax=-1;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>c;
        fr[c]++;
        if(c>hmax){
            hmax=c;
        }
    }
    int k=0;
    for(int i=hmax;i>=0;i--){
        while(fr[i]!=0){
            v[++k]=i;
            fr[i]--;
        }
    }
    for(int i=1;i<=n;i++){
        fout<<v[i]<<" ";
    }
    fout<<"\n";
    for(int i=1;i<=n;i++){
        if(i-1>=1 && i+1<=n && v[i]==(v[i-1]+v[i+1])/2){
            fout<<"1"<<" ";
        }else{
            fout<<"0"<<" ";
        }
    }
    return 0;
}
