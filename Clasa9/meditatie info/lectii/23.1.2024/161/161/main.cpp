#include <iostream>

using namespace std;
int v[201];
int main()
{
    int n;
    cin>>n;
    int s=0;
    int cnt=0;
    int ma;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]!=0){
            s+=v[i];
            cnt++;
        }
    }
    ma=s/cnt;
    for(int i=1;i<=n;i++){
        if(v[i]==0){
            v[i]=ma;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
