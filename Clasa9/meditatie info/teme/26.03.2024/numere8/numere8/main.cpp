#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere8.in");
ofstream fout("numere8.out");
int ap[9999];
int main()
{
    int n;
    while(fin>>n){
        if(n<10000){
            ap[n]=1;
        }
    }

    for(int i=9999;i>=1;i--){
        if(ap[i]==0){
            fout<<i<<" ";
        }
    }
    return 0;
}
