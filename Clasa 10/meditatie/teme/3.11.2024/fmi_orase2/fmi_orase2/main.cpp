#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("fmi_orase2.in");
ofstream fout("fmi_orase2.out");
int v[101];
int cmp(int a, int b){
   return a>b;
}
int main()
{
    int n,x,nrc;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    sort(v+1,v+n+1,cmp);
    for(int i=1;i<=n;i++)
        if(v[i]>=i)
            nrc=i;

    fout<<nrc;
    return 0;
}
