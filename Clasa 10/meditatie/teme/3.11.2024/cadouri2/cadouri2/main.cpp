#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cadouri2.in");
ofstream fout("cadouri2.out");
bool ciur[100001];
int k;
int v[80001],fr[80001],a[1001];
void eratostene(){
    for(int i=2;i<=100000;i++){
        if(ciur[i]==0){  /// i=numar prim
               v[++k]=i;
            for(int j=2*i;j<=100000;j+=i){
                ciur[j]=1;
            }
        }
    }
}

int main() {
    int n,x;
    fin>>n;
    eratostene();
    for(int i=1; i<=n; i++) {
        fin>>x;

        for(int  d=1;d<=k&&x>1; d++) {  /// parcurg vectorul v
            if(x%v[d]==0) {
                while(x%v[d]==0) {
                    fr[v[d]]++;
                    x/=v[d];
                }
            }
        }
        a[i]=x;

    }
    long long  p=1;
    for(int i=1;i<=k;i++){
        if(fr[i]>0){
            p=1ll*p*(fr[i]+1)%1000000007;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=1)
        {
            int nr=1;
            for(int j=i+1;j<=n;j++)
            if(a[i]==a[j]){
                nr++;
                a[j]=1;
            }
            p=1LL*p*(nr+1)%1000000007;
        }
    }
    fout<<p;
    return 0;
}
