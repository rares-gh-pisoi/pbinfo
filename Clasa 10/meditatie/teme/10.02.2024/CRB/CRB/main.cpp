#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("crb.in");
ofstream fout("crb.out");
int cmp(int x,int y){
    return x>y;
}
int v[1001],a[1001];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
        a[i]=v[i];
    }
    sort(v+1,v+n+1,cmp);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]==v[i]){
            cnt++;
        }
    }
    fout<<cnt;
    return 0;
}
