#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("perechi.in");
ofstream fout("perechi.out");
int main() {
    long long k;
    fin>>k;
    int cnt=0;
    for(long long a=1;a*a<=k;a++){
        if(k%a==0){
            long long b=k/a;
            if((a+b)%2==0 && (b-a)%2==0){
                long long x=(a+b)/2;
                long long y=(b-a)/2;
                if(x>0 && y>0){
                    ++cnt;
                }
            }
        }
    }
    fout<<cnt;
    return 0;
}
