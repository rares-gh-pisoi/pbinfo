#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("romburi.in");
ofstream fout("romburi.out");
int a[1001][1001];
int main()
{
    int n,m,r,l,c,p;
    fin>>n>>m>>r;
    for(int k=1;k<=r;k++){
        fin>>l>>c>>p;
        a[l+p-1][c-p+1]=1;
        int st=l+p-1;
        int dr=l+p-1;
        for(int j=l+p;j<=c/2;j++){
            st--;
            dr++;
            for(int i=st;i<=dr;i++){
                a[i][j]=1;
                a[i][j]=a[i][j-i];
                a[i][]
            }
        }
    }
    return 0;
}
