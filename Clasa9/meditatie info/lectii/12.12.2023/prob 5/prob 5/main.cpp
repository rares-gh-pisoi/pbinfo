#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifra.in");
ofstream fout("cifra.out");
int main() {
    int n;
    fin>>n;
    if(n<10) {
        if(n%2==1) {
            fout<<n-1;
        } else {
            fout<<"cifra este para";
        }
    }

    return 0;
}
