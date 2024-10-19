#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("rotire.in");
ofstream fout("rotire.out");
int a[11][11];
int b[11][11];
int main()
{
    int m,n;
    fin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            b[i][j]=a[j][n-i+1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fout<<b[i][j]<<" ";
        }
        fout<<"\n";
    }
    return 0;
}
