#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("mincols.in");
ofstream fout("mincols.out");
int a[51][51];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    for(int j=1;j<=n;j++){
        int nrmin=1001;
        for(int i=1;i<=n;i++){
            if(a[i][j]<nrmin){
                nrmin=a[i][j];
            }
        }
        fout<<nrmin<<" ";
    }
    return 0;
}
