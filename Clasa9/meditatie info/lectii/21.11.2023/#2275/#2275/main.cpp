#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("minimdoua.in");
ofstream fout("minimdoua.out");
int main() {
    int n;
    fin>>n;
    int min1=INT_MAX;
    int min2=INT_MAX;
    for(int i=1; i<=n; i++) {
        int k;
        fin>>k;
        int u2c=k%100;
        if(k>=10 && u2c%10==u2c/10) {
            if(k<min1) {
                min2=min1;
                min1=k;
            } else {
                if(min2>k) {
                    min2=k;
                }

            }
        }
    }
    if(min1==INT_MAX || min2==INT_MAX) {
        fout<<"numere insuficiente";
    } else {
        fout<<min1<<" "<<min2;
    }
    return 0;
}
