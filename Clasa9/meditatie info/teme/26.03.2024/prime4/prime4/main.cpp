#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("prime4.in");
ofstream fout("prime4.out");
int ap[10000];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        int nr;
        fin>>nr;
        if(nr>99 && nr<1000){
            ap[nr]++;
        }
    }
    int nrc;
    int apmax=0;
    for(int i=100;i<=999;i++){
        if(ap[i]>0){
            int prim=1;
            for(int d=2;d*d<=i;d++){
                if(i%d==0){
                    prim=0;
                    break;
                }
            }
            if(prim==1){
                if(ap[i]>apmax){
                    nrc=i;
                    apmax=ap[i];
                }
            }
        }
    }
    fout<<nrc;
    return 0;
}
