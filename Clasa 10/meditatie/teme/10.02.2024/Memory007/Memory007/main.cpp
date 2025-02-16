#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("memory007.in");
ofstream fout("memory007.out");
int v[500001];
int main()
{
    int n,st,dr,k,p;
    fin>>n>>k>>st>>dr;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    sort(v+1,v+n+1);
    long long s=0;
    for(int i=1;i<=k;i++){
        fin>>p;
        s+=v[p];
    }
    fout<<s;
    return 0;
}
