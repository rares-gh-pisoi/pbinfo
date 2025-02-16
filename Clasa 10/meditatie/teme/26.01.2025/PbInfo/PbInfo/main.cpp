#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("pbinfo.in");
ofstream fout("pbinfo.out");
int main()
{
    char c[101],cuv[101];
    fin>>c;
    int n;
    fin>>n;
    fin.get();
    for(int i=1;i<=n;i++){
        fin>>cuv;
        if(strstr(c,cuv)!=NULL || strstr(c,"virus")!=NULL){
            fout<<"DA";
            return 0;
        }
    }
    fout<<"NU";
    return 0;
}
