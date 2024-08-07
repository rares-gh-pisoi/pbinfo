#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("prodmax.in");
ofstream fout("prodmax.out");
int a[101][101];
int v[101];
int main()
{
    int n,m;
    fin>>m>>n;
    int cntmax=-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];

        }
    }
    for(int j=1;j<=n;j++){
        int cnt2=0;
        int ok=1;
        for(int i=1;i<=m;i++){
            if(a[i][j]==2){
                cnt2++;
            }else if(a[i][j]==0){
                ok=0;
                break;
            }
            if(ok==1){
                v[j]=cnt2;
                if(cnt2>cntmax){
                    cntmax=cnt2;
                }
            }
        }
    }
    for(int j=1;j<=n;j++){
        if(v[j]==cntmax){
            fout<<j<<" ";
        }
    }
    return 0;
}
