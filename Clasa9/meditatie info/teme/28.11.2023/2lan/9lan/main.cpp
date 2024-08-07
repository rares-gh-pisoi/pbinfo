#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("9lan.in");
ofstream fout("9lan.out");
int main()
{
    int n;
    fin>>n;
    if(n==0){
        fout<<1;
    }else{
        switch(n%2){
        case 1:
            fout<<9;
            break;
        case 0:
            fout<<1;
            break;
        }
    }
    return 0;
}
