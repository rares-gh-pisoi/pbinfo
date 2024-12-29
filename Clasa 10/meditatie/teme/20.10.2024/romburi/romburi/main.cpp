#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("romburi.in");
ofstream fout("romburi.out");
int a[2005][2005];
int main()
{
    int n,m,r,l,c,p;
    fin>>n>>m>>r;
    for(int k=1;k<=r;k++){
        fin>>l>>c>>p;
        for(int i=0;i<p;i++){
            for(int j=0;j<=i;j++){
                a[l+i][c+j]=1;
                a[l+i][c-j]=1;
                a[l+(p-1)*2-i][c+j]=1;
                a[l+(p-1)*2-i][c-j]=1;
            }
        }

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==0){
                cnt++;
            }
        }
    }

    fout<<cnt;
    return 0;
}
