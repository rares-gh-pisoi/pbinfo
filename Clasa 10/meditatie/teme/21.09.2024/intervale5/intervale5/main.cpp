#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("intervale5.in");
ofstream fout("intervale5.out");
int ap[102];
int main()
{
    int x;
    while(fin>>x){
        ap[x]=1;
    }
    for(int i=0;i<=100;i++){
        if(ap[i]==1){
            x=i;
            break;
        }
    }
    int ok=0;
    for(int i=x+1;i<=100;i++){
        if(ap[i]==1){
            if(i-x>1){
                fout<<x<<" "<<i<<"\n";
                ok=1;
            }
            x=i;
        }
    }
    if(ok==0){
        fout<<"nu exista";
    }
    return 0;
}
