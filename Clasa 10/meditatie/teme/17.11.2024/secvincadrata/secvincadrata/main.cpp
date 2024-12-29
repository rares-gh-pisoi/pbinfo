#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secventaincadrata.in");
ofstream fout("secventaincadrata.out");
int v[10];
int a[10];
int lng[10];
int main() {
    int n;
    int cnt=1;
    while(fin>>n) {
        if(v[n]==0) {
            v[n]=cnt;
        }
        a[n]=cnt;
        cnt++;

    }
    int lgmax=-1;
    for(int i=0; i<=9; i++) {
        int lg=a[i]-v[i]+1;
        if(lg>lgmax) {
            lgmax=lg;
        }
        lng[i]=lg;
    }
    fout<<lgmax<<"\n";
    for(int i=0; i<=9; i++) {
        if(lng[i]==lgmax) {
            fout<<i<<" ";
        }
    }
    return 0;
}
