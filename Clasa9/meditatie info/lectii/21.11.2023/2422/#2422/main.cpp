#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("produsmaxim.in");
ofstream fout("produsmaxim.out");
int main()
{
    int k;
    while(fin>>k){
        int a,b,c;
        a=k/3;
        if(k%3==0){
            b=a;
            c=a;
        }else{
            if(k%3==1){
                b=a;
                c=a+1;
            }else{
                b=a+1;
                c=a+1;
            }
        }
        fout<<k<<" "<<a<<" "<<b<<" "<<c<<"\n";
    }
    return 0;
}
