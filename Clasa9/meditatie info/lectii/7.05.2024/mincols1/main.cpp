#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("mincols1.in");
ofstream fout("mincols1.out");
int a[31][31];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    int p=1;
    int cnt=0;
    for(int j=1;j<=n;j++){
        int vmin=INT_MAX;
        for(int i=1;i<=n;i++){
            if(a[i][j]<vmin){
                vmin=a[i][j];
            }
        }
        if(a[n+1-i][i]==vmin){
            p*=vmin;
            cnt++;
        }

    }
    if(cnt==0){
        fout<<"NU EXISTA";
    }else{
        fout<<p%10;
    }
    return 0;
}
