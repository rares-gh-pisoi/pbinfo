#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secvmaxval.in");
ofstream fout("secvmaxval.out");
int a[200001];
int main()
{
    int n;
    long long val;
    fin>>n>>val;
    long long sum=0;
    int lgmax=-1;
    for(int i=1;i<=n;i++){
        fin>>a[i];
    }
    int st=1;
    for(int dr=1;dr<=n;dr++){
        sum+=a[dr];
        while(sum>val){
            sum-=a[st];
            st++;
        }
        lgmax=max(lgmax,dr-st+1);
    }
    fout<<lgmax;
    return 0;
}
