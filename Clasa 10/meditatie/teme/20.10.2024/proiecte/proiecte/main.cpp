#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("proiecte.in");
ofstream fout("proiecte.out");
int v[1001];
int b[1001];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
        b[i]=v[i];
    }
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++){
        int nrc=b[i];
        for(int j=1;j<=n;j++){
            if(v[j]==b[i]){
                fout<<j<<" ";
                break;
            }
        }
    }
    return 0;
}
