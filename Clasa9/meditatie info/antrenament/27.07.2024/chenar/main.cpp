#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("chenar.in");
ofstream fout("chenar.out");
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
    for(int i=1;i<=n;i++){
        fout<<a[1][i]<<" ";
    }
    for(int i=2;i<=n;i++){
        fout<<a[i][n]<<" ";
    }
    for(int i=n-1;i>=1;i--){
        fout<<a[n][i]<<" ";
    }
    for(int i=n-1;i>1;i--){
        fout<<a[i][1]<<" ";
    }
    return 0;
}
