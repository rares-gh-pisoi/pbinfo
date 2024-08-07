#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("maximpar.in");
ofstream fout("maximpar.out");
int main() {
    int n;
    fin>>n;
    int maxpar=INT_MIN;
    int cnt=0;
    for(int i=1; i<=n; i++) {
        int k;
        fin>>k;
        if(k%2==0) {
            if(k>maxpar) {
                maxpar=k;
                cnt=1;
            } else {
                if(maxpar==k) {
                    cnt++;
                }
            }

        }

    }
    if(maxpar==INT_MIN) {
        fout<<-1;
    }else{
        fout<<maxpar<<" "<<cnt;
    }

    return 0;
}
