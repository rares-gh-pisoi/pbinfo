#include <iostream>

using namespace std;
int a[32][32];
int b[32][32];
int v[101];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    int ok=0;;
    int t=0;
    while(ok==0){
        t++;
        ok=1;
        int s=0;
        for(int i=2;i<n;i++){
            for(int j=2;j<n;j++){
                if(a[i][j]==1){
                    s++;
                    int vec=0;
                    if(a[i-1][j]==0){
                        vec++;
                    }
                    if(a[i+1][j]==0){
                        vec++;
                    }
                    if(a[i][j-1]==0){
                        vec++;
                    }
                    if(a[i][j+1]==0){
                        vec++;
                    }
                    if(vec>=2){
                        ok=0;
                        b[i][j]=0;
                    }
                }
            }
        }
         v[t]=s;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                a[i][j]=b[i][j];
            }
        }

    }
    cout<<t-1<<"\n";
    for(int i=1;i<=t-1;i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}
