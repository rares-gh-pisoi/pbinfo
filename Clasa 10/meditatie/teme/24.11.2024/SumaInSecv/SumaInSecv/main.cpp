#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sumainsecv.in");
ofstream fout("sumainsecv.out");
int a[101];
int main()
{
    int n,s;
    fin>>n>>s;
    for(int i=1;i<=n;i++){
        fin>>a[i];
    }
    int sum=0;
    int st=1;
    for(int i=1;i<=n;i++){
        sum+=a[i];
        while(sum>s){
            sum-=a[st];
            st++;
        }
        if(sum==s){
            fout<<st<<" "<<i;
            return 0;
        }
    }
    fout<<0<<" "<<0;
    return 0;
}
