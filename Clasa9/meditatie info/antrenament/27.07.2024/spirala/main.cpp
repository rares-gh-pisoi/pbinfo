#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("spirala.in");
ofstream fout("spirala.out");
int a[24][24];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=1;i<=n/2;i++){
        for(int k=i;k<=n+1-i;k++){
            fout<<a[i][k]<<" ";
        }
        for(int k=i+1;k<=n+1-i;k++){
            fout<<a[k][n+1-i]<<" ";
        }
        for(int k=n-i;k>=i;k--){
            fout<<a[n+1-i][k]<<" ";
        }
        for(int k=n-i;k>=i+1;k--){
            fout<<a[k][i]<<" ";
        }
    }
    if(n%2==1){
        fout<<a[n/2+1][n/2+1];
    }
    return 0;
}
