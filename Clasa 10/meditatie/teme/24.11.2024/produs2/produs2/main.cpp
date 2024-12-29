#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("produs2.in");
ofstream fout("produs2.out");
int a[1000001];
int main()
{
    int n,p;
    fin>>n>>p;
    for(int i=1;i<=n;i++){
        fin>>a[i];
    }
    long long pr=1;
    long long lg=0;
    int st=1;
    for(int dr=1;dr<=n;dr++){
        pr*=a[dr];
        while(st<=dr && pr>p){
            pr/=a[st];
            st++;
        }
        lg+=dr-st+1;
    }
    fout<<lg;
    return 0;
}
