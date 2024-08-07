#include <iostream>

using namespace std;
int ap[1000000];
int main()
{
    int n,m,nr;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>nr;
            if(nr<1000000){
                ap[nr]++;
            }
        }
    }
    int apmax=0;
    int nrc;
    for(int i=0;i<1000000;i++){
        if(ap[i]>0){
            if(ap[i]>=apmax){
                apmax=ap[i];
                nrc=i;
            }
        }
    }
    cout<<nrc;
    return 0;
}
