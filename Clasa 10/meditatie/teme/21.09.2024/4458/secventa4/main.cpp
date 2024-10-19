#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secventa4.in");
ofstream fout("secventa4.out");
int main()
{
    int n,lg,lgmax,st,dr,x,y;
    fin>>n;
    lg=1;
    lgmax=1;
    fin>>x;
    for(int i=2;i<=n;i++){
        fin>>y;
        if(x%10==y%10){
            lg++;
        }else{
            lg=1;
        }
        if(lg>lgmax){
            lgmax=lg;
            dr=i;
        }
        x=y;
    }
    st=dr-lgmax+1;
    fout<<st<<" "<<dr;
    return 0;
}
