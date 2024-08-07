#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("platou2.in");
ofstream fout("platou2.out");
int main()
{
    int n;
    fin>>n;
    int ca;
    fin>>ca;
    int lg=1;
    int lgmax=1;
    for(int i=2;i<=n;i++){
        int c;
        fin>>c;
        if(ca<c){
            lg++;
        }else{
            lg=1;
        }
        if(lg>lgmax){
            lgmax=lg;
        }
        ca=c;
    }
    fout<<lgmax;
    return 0;
}
