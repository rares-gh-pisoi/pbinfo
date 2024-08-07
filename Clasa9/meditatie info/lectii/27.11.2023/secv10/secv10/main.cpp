#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secv10.in");
ofstream fout("secv10.out");
int main()
{
    int n,x;
    fin>>n;
    int l=0;
    int lmax=0;
    int nrsec=0;
    for(int i=1;i<=n;i++){
        fin>>x;
        if(x%10==0){
            l++;
        }else{
            l=0;
        }
        if(l>lmax){
            lmax=l;
            nrsec=1;
        }else if(l==lmax){
            nrsec++;
        }

    }
    fout<<lmax<<" "<<nrsec;
    return 0;
}
