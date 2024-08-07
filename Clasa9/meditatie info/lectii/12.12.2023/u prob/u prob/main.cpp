#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int main()
{
    int m;
    fin>>m;
    int nr;
    fin>>nr;
    int cnt=0;
    while(fin>>nr){
        if(nr%m!=0){
            fout<<nr<<" ";
            cnt++;
        }
    }
    if(cnt==0){
        fout<<"NU EXISTA";
    }
    return 0;
}
