#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nrcurat.in");
ofstream fout("nrcurat.out");
int main() {

    int k;
    while(fin>>k) {
        int ck=k;
        int ogl=0;
        int nr9=0;
        int uc;
        while(k!=0) {
            uc=k%10;
            ogl=ogl*10+uc;
            nr9=nr9*10+9;
            k=k/10;
        }
        int ux=nr9-ck;
        if(ogl==ux) {
            fout<<1<<" ";
        } else {
            fout<<0<<" ";
        }

    }
    return 0;
}
