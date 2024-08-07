#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("matrice6.in");
ofstream fout("matrice6.out");
int a[101][101];
int ap[101];
int main()
{
    int n;
    fin>>n;
    int vmin=INT_MAX;
    int vmax=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
            if(a[i][j]<vmin){
                vmin=a[i][j];
            }
            if(a[i][j]>vmax){
                vmax=a[i][j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==vmax){
                ap[i]=1;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(ap[i]==1){
            for(int j=1;j<=n;j++){
                a[i][j]+=vmin;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<endl;
    }
    return 0;
}
