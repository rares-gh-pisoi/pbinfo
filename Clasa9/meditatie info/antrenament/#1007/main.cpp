#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("matrice7.in");
ofstream fout("matrice7.out");
int a[101][101];
int main()
{
    int n,m,max1;
    fin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>a[i][j];
        }
    }
    max1=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]>max1){
                max1=a[i][j];
            }
        }
    }
    for(int j=1;j<=m;j++){
        int min1=INT_MAX;
        for(int i=1;i<=n;i++){
            if(a[i][j]<min1){
                min1=a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i][j]==max1){
                a[i][j]=min1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<endl;
    }
    return 0;
}
