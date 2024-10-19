#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nrlipsa2.in");
ofstream fout("nrlipsa2.out");
int p[150];
int n[150];
int main()
{
    int x;
    while(fin>>x){
        if(x<=100 && x>=0){
            p[x]=1;
        }else if(x<0 && x>=-100){
            n[(-1)*x]=1;
        }
    }
    int ok=0;
    for(int i=100;i>0;i--){
        if(n[i]==0){
            fout<<i*(-1);
            ok=1;
            break;
        }
    }
    if(ok==0){
        for(int i=0;i<=100;i++){
            if(p[i]==0){
                fout<<i;
                ok=1;
                break;
            }
        }
    }
    if(ok==0){
        fout<<"nu exista";
    }
    return 0;
}
