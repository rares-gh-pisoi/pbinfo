#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("puterik.in");
ofstream fout("puterik.out");
int v[101],k;
int putereK(int x){
    if(x==1){
        return 1;
    }else{
        if(x==0){
            return 0;
        }
        while(x%k==0){
            x/=k;
        }
        if(x==1){
            return 1;
        }else{
            return 0;
        }
    }
}
int main()
{
    int n;
    fin>>n>>k;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    sort(v+1,v+n+1);
    for(int i=1;i<=n;i++){
        if(putereK(v[i])==1){
            fout<<v[i]<<" ";
        }
    }
    return 0;
}
