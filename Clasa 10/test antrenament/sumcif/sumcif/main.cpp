#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sumcif.in");
ofstream fout("sumcif.out");
int main()
{
    long long n;
    fin>>n;
    int s=0;
    while(n!=0){
        s=s+n%10;
        n/=10;
    }
    fout<<s;
    return 0;
}
