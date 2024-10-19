#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zoom.in");
ofstream fout("zoom.out");
int m1[11][11];
int m2[1001][1001];
int main()
{
    int p,n,m;
    fin>>p>>n>>m;
    for(int i=1;i<=p;i++){
        for(int j=1;j<=p;j++){
            fin>>m1[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>m2[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n-p+1;i++){
        for(int j=1;j<=m-p+1;j++){
              int ok=1;
              for(int i1=1;i1<=p;i1++){
                    for(int j1=1;j1<=p;j1++){
                        if(m1[i1][j1]!=m2[i+i1-1][j+j1-1]){
                            ok=0;
                            break;
                        }
                    }
              }
              if(ok==1){
                cnt++;
              }
        }
    }
    fout<<cnt;
    return 0;
}
