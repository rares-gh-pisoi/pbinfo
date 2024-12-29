#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("vacantadevara.in");
ofstream fout("vacantadevara.out");
int ap[10];
int main()
{
    int n,x;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>x;
        ap[x]++;
    }
    for(int i=1;i<=9;i++){
        if(ap[i]){
            fout<<i;
            ap[i]--;
            break;
        }
    }
    for(int i=0;i<=9;i++){
        if(ap[i]){
            while(ap[i]){
                fout<<i;
                ap[i]--;
            }
        }
    }
    return 0;
}
