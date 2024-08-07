#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("platou2.in");
ofstream fout("platou2.out");
int main()
{
    int n,x,y,i;
    fin>>n;
    fin>>x;
    int lg=1;
    int lmax=1;
    for(i=2;i<=n;i++){
        fin>>y;
        if(x<y){
            lg++;
        }else{
            lg=1;
        }
        if(lg>lmax){
            lmax=lg;
        }
        x=y;
    }
    fout<<lmax;
    return 0;
}
