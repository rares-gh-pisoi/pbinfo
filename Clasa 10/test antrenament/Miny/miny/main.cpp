#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("miny.in");
ofstream fout("miny.out");
int v[50001];
int main()
{
    int n;
    fin>>n;
    long long p=1;
    for(int i=1;i<=n;i++){
        int x;
        fin>>x;
        p*=x;
    }
    fout<<p/10%10<<"\n";
    for(int d=2;p!=1;d++){
        if(p%d==0){
            int nrd=0;
            while(p%d==0){
                nrd++;
                p/=d;
            }
            v[d]=nrd;
        }
    }
    return 0;
}
