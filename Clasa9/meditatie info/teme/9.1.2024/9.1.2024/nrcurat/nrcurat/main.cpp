#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nrcurat.in");
ofstream fout("nrcurat.out");
int main() {

    int x;
    while(fin>>x) {
        int cx=x;
        int ogl=0;
        int n9=0;
        while(x!=0) {
            int c=x%10;
            ogl=ogl*10+c;
            n9=n9*10+9;
            x/=10;
        }
        int ur=n9-cx;
        if(ogl==ur) {
            fout<<1<<" ";
        } else {
            fout<<0<<" ";
        }
    }

    return 0;
}
