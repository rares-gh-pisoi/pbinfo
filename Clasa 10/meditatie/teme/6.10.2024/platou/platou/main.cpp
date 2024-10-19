#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("platou.in");
ofstream fout("platou.out");
int v[1000001];
int max1[1000001];
int max2[1000001];
int main() {
    int n,c;
    fin>>c>>n;
    for(int i=1; i<=n; i++) {
        fin>>v[i];
    }
    if(c==1) {
        int lg=1;
        int lgmax=INT_MIN;
        int elem=-1;
        for(int i=1; i<n; i++) {
            if(v[i]==v[i+1]) {
                lg++;
            } else {
                lg=1;
            }
            if(lg>lgmax) {
                lgmax=lg;
                elem=v[i];
            } else if(lg==lgmax && v[i]>elem) {
                elem=v[i];
            }
        }
        fout<<lgmax<<" "<<elem;
        return 0;
    }
    int lg=1;
    for(int i=2; i<=n; i++) {
        if(v[i]==v[i-1]) {
            lg++;
        } else { /// v[i]!=v[i-1]   in v[i-1] se termina o secventa cu v[i] incepe una noua
            int x=v[i-1];
            if(max1[x]<lg) {
                max2[x]=max1[x];
                max1[x]=lg;
            } else if(max2[x]<lg) {
                max2[x]=lg;
            }
            lg=1;
        }
    }
    if(max1[v[n]]<lg){
        max2[v[n]]=max1[v[n]];
        max1[v[n]]=lg;
    }else if(max2[v[n]]<lg){
        max1[v[n]]=lg;
    }
    int valmax=INT_MIN;
    int smax=INT_MIN;
    for(int i=0; i<=1000000; i++) {
        int s=max1[i]+max2[i];
        if(s>smax) {
            smax=s;
            valmax=i;
        } else if(s==smax && i>valmax) {
            valmax=i;
        }
    }
    fout<<smax<<" "<<valmax;

    return 0;
}
