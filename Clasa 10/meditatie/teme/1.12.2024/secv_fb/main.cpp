#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secv_fb.in");
ofstream fout("secv_fb.out");
int a[100001];
long long fr[100001];
int main()
{
    int n,k;
    fin>>n>>k;
    for(int i=1;i<=n;i++){
        fin>>a[i];
    }
    int cnt=0;
    for(int i=1;i<=n-k+1;i++){
        int nr=0;
        for(int j=i;j<=i+k-1;j++){
            if(fr[a[j]]==0){
                nr++;
                fr[a[j]]=1;
            }
        }
        if(nr==k){
            cnt++;
        }
        for(int j=i;j<=i+k-1;j++){
            fr[a[j]]=0;
        }
    }
    fout<<cnt;
    return 0;
}
