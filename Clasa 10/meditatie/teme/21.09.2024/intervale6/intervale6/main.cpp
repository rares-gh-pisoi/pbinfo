#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("intervale6.in");
ofstream fout("intervale6.out");
int fr[10001];
int main()
{
    int n,x,y;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>x;
        fr[x]=1;
    }
    // sume partiale pe fr

    for(int i=1;i<=10000;i++){
        fr[i]+=fr[i-1];
    }
    /// fr[i]== nr de numere mai mici sau egale decat i citite
    int cnt=0;
    while( fin>>x>>y){
        if(fr[y]-fr[x-1]==0){  /// fr[y] -fr[x-1]= nr de numere din intervalul [x,y] citite
            cnt++;
        }
    }
    fout<<cnt;
    return 0;
}
