#include <iostream>
#include <climits>
using namespace std;
int v[51];
int main()
{
    int n,m,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    cin>>m;
    int smax=INT_MIN;
    int ind;
    for(int i=1;i<=m;i++){
        int s=0;
        for(int j=1;j<=n;j++){
            cin>>x;
            s=s+x*v[j];
        }
        if(s>smax){
            smax=s;
            ind=i;
        }
    }
    cout<<ind;
    return 0;
}
