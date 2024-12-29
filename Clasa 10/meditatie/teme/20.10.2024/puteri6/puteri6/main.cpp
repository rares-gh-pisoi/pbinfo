#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("puteri6.in");
ofstream fout("puteri6.out");
int nrzero(int n){
    int nrz=0;
    while(n%10==0){
        nrz++;
        n/=10;
    }
    return nrz;
}
int put10(int z){
    int nrzr=z;
    int p=1;
    while(nrzr!=0){
        p*=10;
        nrzr--;
    }
    return p;
}
int ap[10];
int s[10];
int main()
{
    int n,x;
    fin>>n;
    int cnt=0;
    while(fin>>x){
        int nr0=nrzero(x);
        ap[nr0]++;
        cnt++;
    }
    if(cnt<n){
        fout<<"Nu exista";
        return 0;
    }
        for(int i=0;i<=9;i++){
            s[i]=s[i-1]+ap[i];
            if(s[i]>=n){
                fout<<put10(i);
                break;
            }
        }

    return 0;
}
