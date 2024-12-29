#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("progresie3.in");
ofstream fout("progresie3.out");
int ap[1001];
int main()
{
    int x,y,z;
    while(fin>>x){
        ap[x]=1;
    }
    for(int i=0;i<=1000;i++)
        if(ap[i]==1){
            z=i;
            break;
        }
    for(int i=z+1;i<=1000;i++)
        if(ap[i]==1){
            y=i;
            break;
        }
    int r=y-z;
    int ok=1;
    for(int i=y+1;i<=1000;i++){
        if(ap[i]==1){
            if(i-y!=r){
                ok=0;
                fout<<"NU";
                break;
            }
            y=i;
        }
    }
    if(ok==1){
        fout<<r;
    }
    return 0;
}
