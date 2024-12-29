#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sumainsecv.in");
ofstream fout("sumainsecv.out");
int v[101];
int main()
{
    int n,s;
    fin>>n>>s;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    int sum=0;
    int st=1;
    for(int dr=1;dr<=n;dr++){
        sum+=v[dr];
        while(sum>s){
            sum-=v[st];
            st++;
        }
        if(sum==s){
            fout<<st<<" "<<dr;
            return 0;
        }
    }
    fout<<0<<" "<<0;
    return 0;
}
