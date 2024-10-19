#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("spirala1.in");
ofstream fout("spirala1.out");
int v[10001];
int a[101][101];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    int cnt=1;
    for(int i=1;i<=n/2;i++){
        for(int k=1;k<=n-i;k++){
            a[k][i]=v[cnt];
            cnt++;
        }
        for(int k=2;k<=n-i;k++){
            a[n-i+1][k]=v[cnt];
            cnt++;
        }
        for(int k=n-i;k>=1;k--){
            a[k][n-i+1]=v[cnt];
            cnt++;
        }
        for(int k=n-i;k>=1;k--){
            a[i][k]=v[cnt];
            cnt++;
        }
    }
    int rad=int(sqrt(n));
    if(rad%2==1){
        a[rad-1][rad-1]=v[n];
    }
    for(int i=1;i<=rad;i++){
        for(int j=1;j<=rad;j++){
            fout<<a[i][j];
        }
        fout<<"\n";
    }
    return 0;
}
