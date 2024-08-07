#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pozitie.in");
ofstream fout("pozitie.out");
int v[10000];
int main()
{
    int n;
    fin>>n;
    int cnt=0;
    int poz=0;
    for(int i=0;i<n;i++){
        fin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]<v[0]){
            cnt++;
        }
    }
    poz=cnt+1;
    fout<<poz;
    return 0;
}
