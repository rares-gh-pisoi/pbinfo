#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("perechi.in");
ofstream fout("perechi.out");
int main()
{
    long long n;
    fin>>n;
    long long per=0;
    for(int i=1;i*i<=n;++i){
        if(n%i==0){
            long long i2=n/i;
            if(i2>i){
                if((i+i2)%2==0){
                    per++;
                }
            }
        }
    }
    fout<<per;
    return 0;
}
