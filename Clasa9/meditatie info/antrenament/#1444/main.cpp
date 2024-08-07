#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("memory001.in");
ofstream fout("memory001.out");
long long c[1001]; /// c[i] = suma de pe coloana i
int main()
{
    int m,n,x;
    fin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>x;
            c[j] += x;
        }
    }
    long long smin=c[1];
    int jmin = 1;
    for(int j=2;j<=n;j++){
        if(c[j]<smin){
            smin=c[j];
            jmin=j;
        }
    }
    fout<<jmin;
    return 0;
}
