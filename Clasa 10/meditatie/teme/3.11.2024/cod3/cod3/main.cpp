#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cod3.in");
ofstream fout("cod3.out");
int ap[100];
int main()
{
    int n,x;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>x;
        if(x<100){
            ap[x]++;
        }
    }
    for(int i=0;i<=99;i++){
        if(ap[i]%2==1){
            fout<<i;
        }
    }
    return 0;
}
