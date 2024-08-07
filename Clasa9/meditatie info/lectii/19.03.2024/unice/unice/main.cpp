#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("unice.in");
ofstream fout("unice.out");
int ap[100];
int main()
{
    int n,x;
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>x;
        ap[x]++;
    }
    for(int i=0;i<=99;i++){
        if(ap[i]==1){
            fout<<i<<" ";
        }
    }
    return 0;
}
