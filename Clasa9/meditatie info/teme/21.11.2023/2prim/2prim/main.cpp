#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("2prim.in");
ofstream fout("2prim.out");
int main()
{
    int n;
    fin>>n;
    int nrk=0;
    for(int i=1;i<=n;i++){
        int k;
        fin>>k;
        int u2c=k%100;
        int ok=1;
        if(u2c<2){
            ok=0;
        }
        for(int d=2;d*d<=u2c;d++){
            if(u2c%d==0){
                ok=0;
                break;
            }
        }
        if(ok==1){
            nrk++;
        }
    }
    fout<<nrk;
    return 0;
}
