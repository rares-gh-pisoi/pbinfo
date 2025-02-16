#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("lgmax.in");
ofstream fout("lgmax.out");
char v[256],c[256];
int main()
{
    int n;
    fin>>n;
    fin.get();
    int nmax=-1;
    for(int i=1;i<=n;i++){
        fin.getline(v,256);
        int l = strlen(v);
        if(l>nmax){
            nmax=l;
            strcpy(c,v);
        }

    }
    fout<<c;
    return 0;
}
