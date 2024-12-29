#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("mincifre.in");
ofstream fout("mincifre.out");
int ap[10];
int main()
{
    char cif;
    while(fin>>cif){
        ap[cif-'0']++;
    }
    for(int i=1;i<=9;i++){
        if(ap[i]){
            fout<<ap[i];
            ap[i]--;
            break;
        }
    }
    for(int i=0;i<=9;i++){
        for(int j=1;j<=ap[i];j++){
            fout<<i;
        }
    }
    return 0;
}
