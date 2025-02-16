#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("sortcif2.in");
ofstream fout("sortcif2.out");
int v[101];
int primaCifra(int x){
    while(x>9){
        x/=10;
    }
    return x;
}
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    int ok;
    do{
        ok=1;
        for(int i=1;i<n;i++){
            if(primaCifra(v[i])>primaCifra(v[i+1])){
                ok=0;
                swap(v[i],v[i+1]);
            }
        }
    }while(ok==0);
    for(int i=1;i<=n;i++){
        fout<<v[i]<<" ";
    }
    return 0;
}
