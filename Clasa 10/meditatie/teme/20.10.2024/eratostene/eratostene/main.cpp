#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("eratostene.in");
ofstream fout("eratostene.out");
int prim[1000001];
void eratostene(){
    prim[1]=prim[0]=1;
    for(int i=2;i<1000000;i++){
        if(prim[i]==0){
            for(int j=i*2;j<1000000;j+=i){  /// merg pe multiplii lui i
                prim[j]=1;
            }
        }
    }
}
int main()
{
    eratostene();
    int n,x;
    fin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        fin>>x;
        if(prim[x]==0){
            cnt++;
        }
    }
    fout<<cnt;
    return 0;
}
