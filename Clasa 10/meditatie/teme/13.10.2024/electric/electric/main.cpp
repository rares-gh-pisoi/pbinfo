#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("electric.in");
ofstream fout("electric.out");
int v[100001];
int d[100000];
int main()
{
    int b,n;
    fin>>b>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    sort(v+1,v+n+1);
    d[1]=v[1];
    for(int i=2;i<=n;i++)
        d[i]=v[i]-v[i-1];
    int nr=0;
    int lg=0;
    int crt=b;
    for(int i=1;i<=n;i++){
        if(d[i]<=crt){
            lg+=d[i];
            crt-=d[i];
        }
        else
        {
            nr++;
            if(b>=d[i]){
                lg+=d[i];
                crt=b-d[i];
            }
            else{
                    lg+=b;

                break;
            }
        }

    }
    fout<<lg<<" "<<nr;
    return 0;
}
