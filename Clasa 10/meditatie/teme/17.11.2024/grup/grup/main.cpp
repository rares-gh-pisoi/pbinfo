#include <iostream>
#include <fstream>
#include <climits>
#include <algorithm>
using namespace std;
ifstream fin("grup.in");
ofstream fout("grup.out");
int h[50001];
int v[10];
int ap[10];
int a[10];
int main() {
    int n,c,x,xMin=INT_MAX,Max=-1;
    fin>>n>>c;
    for(int i=0;i<=9;i++)
         v[i]=INT_MAX;
    if(c==1) {
        for(int i=1; i<=n; i++) {
            fin>>x;
            int cx=x;
            while(cx>9)
                cx/=10;
            ap[cx]++;
            if(x<v[cx])
                v[cx]=x;
            if(ap[cx]>Max) {
                Max=ap[cx];
                xMin=v[cx];
            } else if(ap[cx]==Max)
                if(xMin>v[cx])
                    xMin=v[cx];
        }
        fout<<xMin;
        return 0;
    }

    for(int i=1; i<=n; i++) {
        fin>>x;
        do{
            a[x%10]++;
            x/=10;
        }while(x!=0);
        int p=0;
        for(int i=9; i>=0; i--) {
           if(a[i]){
                p=p*10+i;
                a[i]=0;
            }
        }

        h[i]=p;

    }
    sort(h+1,h+n+1);
    int lg=1,lgmax=1;
    for(int i=2; i<=n; i++) {
        if(h[i]==h[i-1])
            lg++;
        else
            lg=1;
        if(lg>lgmax) {
            lgmax=lg;
        }
    }
    fout<<lgmax;
    return 0;
}
