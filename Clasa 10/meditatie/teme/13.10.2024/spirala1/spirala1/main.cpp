#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("spirala1.in");
ofstream fout("spirala1.out");
int v[10001];
int a[105][105];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    int k=1;
    int dim=sqrt(n);
    for(int i=1;i<=dim/2;i++){
            /// colona i
        for(int j=i;j<=dim-i+1;j++){
            a[j][i]=v[k];
            k++;
        }
    /// linia dim-i+1
        for(int j=i+1;j<=dim-i+1;j++){
            a[dim-i+1][j]=v[k];
            k++;
        }
        /// coloana dim-i+1
        for(int j=dim-i;j>=i;j--){
            a[j][dim-i+1]=v[k];
            k++;
        }
        for(int j=dim-i;j>i;j--){
            a[i][j]=v[k];
            k++;
        }
    }
    if(dim%2==1){
        a[dim/2+1][dim/2+1]=v[k];
    }
    for(int i=1;i<=dim;i++){
        for(int j=1;j<=dim;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<"\n";
    }
    return 0;
}
