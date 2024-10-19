#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("masini.in");
ofstream fout("masini.out");
int v[1001];
int main()
{
    int n,t;
    fin>>n>>t;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    sort(v+1,v+n+1);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(v[i]<t){
            cnt++;
            t-=v[i];
        }else{
            break;
        }
    }
    fout<<cnt;
    return 0;
}
