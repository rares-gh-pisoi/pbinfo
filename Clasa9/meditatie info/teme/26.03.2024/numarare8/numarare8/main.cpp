#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numarare8.in");
ofstream fout("numarare8.out");
int ap[10000];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        int nr;
        fin>>nr;
        if(nr>99 && nr<1000){
            ap[nr]=1;
        }
    }
    int cnt=0;
    for(int i=100;i<=999;i++){
        if(ap[i]==0){
            int prim=1;
            for(int d=2;d*d<=i;d++){
                if(i%d==0){
                    prim=0;
                    break;
                }
            }
            if(prim==1){
                cnt++;
            }
        }

    }
    fout<<cnt;
    return 0;
}
