#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("eureni.in");
ofstream fout("eureni.out");
int main()
{
    int s,n,m;
    fin>>s>>n>>m;
    int p=1;
    while(n!=0){
        p*=m;
        n--;
    }
    int cnt=0;
    for(int i=p;i>=1;i/=m){
        if(s>=i){
            fout<<i<<" ";
            int nr=0;
            while(s>=i){
                nr++;
                s-=i;
            }
            cnt+=nr;
            fout<<nr<<"\n";
        }
    }
    fout<<cnt;
    return 0;
}
