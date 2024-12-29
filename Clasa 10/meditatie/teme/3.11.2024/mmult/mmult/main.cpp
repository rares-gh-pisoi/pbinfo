#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("mmult.in");
ofstream fout("mmult.out");
int ap[1000001];
int main()
{
    int n,x;
    fin>>n;
    int nmax=INT_MIN;
    for(int i=1;i<=n;i++){
        fin>>x;
        ap[x]++;
        if(x>nmax)
            nmax=x;
    }
    int s=0;
    while(ap[1]){
        int i=1;
        while(ap[i]){
            ap[i]--;
            i++;
        }
        s++;
    }
    int ok=1;
    for(int i=1;i<=nmax;i++){
        if(ap[i]){
            ok=0;
            break;
        }
    }
    if(ok==0){
        fout<<"-1";
    }else{
        fout<<s;
    }
    return 0;
}
