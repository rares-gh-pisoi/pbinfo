#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("doi.in");
ofstream fout("doi.out");
int main()
{
    int n,nr,cnt;
    fin>>n;
    cnt=0;
    for(int i=1;i<=n;i++){
        fin>>nr;
        if(nr<100){
            fout<<nr<<" ";
            cnt++;
        }
    }
    if(cnt==0){
        fout<<"NU EXISTA";
    }
    return 0;
}
