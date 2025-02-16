#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere16.in");
ofstream fout("numere16.out");
long long v[21];
int st()
int main() {
    long long n;
    fin>>n;
    long long cn=n;
    int cif=0;
    while(cn!=0) {
        cif++;
        cn/=10;
    }
    for(int i=1;i<cif;i++){

    }
    return 0;
}
