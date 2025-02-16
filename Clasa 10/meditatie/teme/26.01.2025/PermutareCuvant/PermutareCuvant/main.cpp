#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("permutarecuvant.in");
ofstream fout("permutarecuvant.out");
int main()
{
    char cuv[21];
    fin>>cuv;
    fout<<cuv<<" ";
    int rep=strlen(cuv)-1;
    for(int i=0;i<rep;i++){
        char t[21]={};
        strcpy(t,cuv+i+1);
        strncat(t,cuv,i+1);
        fout<<t<<" ";
    }
    return 0;
}
