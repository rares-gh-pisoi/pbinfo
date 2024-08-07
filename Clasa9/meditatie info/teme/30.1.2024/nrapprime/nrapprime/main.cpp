#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nrapprime.in");
ofstream fout("nrapprime.out");
int v[101];
int main()
{
    int n;
    fin>>n;
    int ap=0;
    for(int i=1;i<=n;i++){
        fin>>v[i];
        int prim=1;
        if(v[i]<2){
            prim=0;
        }
        for(int d=2;d*d<=v[i];d++){
            if(v[i]%d==0){
                prim=0;
                break;
            }
        }
        if(prim==1){
            ap++;
        }
    }
    fout<<ap;
    return 0;
}
