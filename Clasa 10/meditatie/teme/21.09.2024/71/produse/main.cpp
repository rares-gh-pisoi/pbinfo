#include <iostream>

using namespace std;
int v[1002];
int w[1002];
int main()
{
    int t,n,m;
    cin>>t;
    while(t!=0){
        t--;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        cin>>m;
        for(int i=1;i<=m;i++){
            cin>>w[i];
        }
       int s=0;
       int j=1,i;
       int ok=1;
       for( i=1;i<=n && j<=m;i++){
            s+=v[i];
            if(s==w[j]){
                j++;
                s=0;
            }else if(s>w[j]){
                ok=0;
                break;
            }
       }
        if(i<=n || j<=m){
            ok=0;
        }
        cout<<ok<<"\n";

    }
    return 0;
}
