#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("distanta.in");
ofstream fout("distanta.out");
int ap1[1001];
int ap2[1001];
int main()
{
    int n;
    int cnt=1;
    while(fin>>n){
        if(ap1[n]==0){
            ap1[n]=cnt;
        }
        ap2[n]=cnt;
        cnt++;
    }
    int lgmax=-1;
    for(int i=1;i<=1000;i++){
        if(ap1[i]!=0){
            int lg=ap2[i]-ap1[i];
            if(lg>lgmax)
                lgmax=lg;
        }
    }
    fout<<lgmax;
    return 0;
}
