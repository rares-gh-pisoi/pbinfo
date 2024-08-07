#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("platou3.in");
ofstream fout("platou3.out");
int main()
{
    int n;
    fin>>n;
    int lg=0;
    int lgmax=0;
    for(int i=1;i<=n;i++){
        int c;
        fin>>c;
        if(c>0){
           lg++;
        }else{
            lg=0;
        }
        if(lg>lgmax){
            lgmax=lg;
        }
    }
    fout<<lgmax;
    return 0;
}
