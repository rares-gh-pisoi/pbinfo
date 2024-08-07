#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("2lan.in");
ofstream fout("2lan.out");
int main() {
    int n;
    fin>>n;
    if (n==0)
        fout<<1;
    else
        switch (n%4) {
        case 1:
            fout<<2;
            break;
        case 2:
            fout<<4;
            break;
        case 3:
            fout<<8;
            break;
        case 0:
            fout<<6;
            break;



        }
    return 0;
}
