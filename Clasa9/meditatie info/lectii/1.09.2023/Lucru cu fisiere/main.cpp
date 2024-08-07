#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("9lan.in");///fisier de intrare
ofstream fout("9lan.out"); /// fisier de iesire
int main()
{
    int n;
    fin>>n;
    if (n%2==0)
        fout<<1;
    else
        fout<<9;
    return 0;
}
