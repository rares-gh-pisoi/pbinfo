#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("maxminmatrice.in");
ofstream fout("maxminmatrice.out");
int a[24][24];
int main()
{
    int n,m;
    fin>>m>>n;
    int nmax=INT_MIN;
    for(int i=1;i<=m;i++){
        int jmin=INT_MAX;
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
            if(a[i][j]<jmin){
                jmin=a[i][j];
            }
        }
        if(jmin>nmax){
            nmax=jmin;
        }
    }
    fout<<nmax;
    return 0;
}
