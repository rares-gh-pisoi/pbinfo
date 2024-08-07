#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secvcresc.in");
ofstream fout("secvcresc.out");
int main()
{
    int x,y,n;
    fin>>n;
    fin>>x;
    int l=1;
    int lmax=1;
    int st=1;
    int dr=1;
    for(int i=2;i<=n;i++){
        fin>>y;
        if(x<y){
            l++;
        }else{
            l=1;
        }
        if(l>lmax){
            lmax=l;
            dr=i;
        }
        x=y;
    }
    st=dr-lmax+1;
    fout<<st<<" "<<dr;
    return 0;
}
