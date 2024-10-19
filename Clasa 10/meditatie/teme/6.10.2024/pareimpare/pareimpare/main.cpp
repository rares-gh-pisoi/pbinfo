#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pareimpare.in");
ofstream fout("pareimpare.out");
int ap[101];
int main()
{
    int x;
    while(fin>>x){
        ap[x]=1;
    }
    for(int i=1;i<=99;i+=2){
        if(ap[i]==1){
            fout<<i<<" ";
        }
    }
    fout<<"\n";
    for(int i=98;i>=2;i-=2){
        if(ap[i]==1){
            fout<<i<<" ";
        }
    }
    return 0;
}
