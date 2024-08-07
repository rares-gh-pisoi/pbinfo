#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("platou1.in");
ofstream fout("platou1.out");
int main()
{
    int xmin=10;
    int k=0;
    int lg=1;
    int ca,c;
    fin>>ca;
    while(fin>>c){
        if(c==ca){
            lg++;
        }else{
            if(k<lg){
                k=lg;
                xmin=ca;
            }else if(k==lg && ca<xmin){
                xmin=ca;
            }
            lg=1;
            ca=c;
        }
    }
    fout<<k<<" "<<xmin<<endl;
    return 0;
}
