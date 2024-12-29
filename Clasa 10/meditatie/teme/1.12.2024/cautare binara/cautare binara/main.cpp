#include <iostream>
#include <algorithm>
using namespace std;
int v[25001];
int a;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>a;
        int st=1,dr=n;
        while(st<=dr){
            int mid=(st+dr)/2;
            if(a==v[mid]){
                cout<<1<<" ";
                break;
            }else if(a<v[mid]){
                dr=mid-1;
            }else{
                st=mid+1;
            }
        }
        if(st>dr){
            cout<<0<<" ";
        }
    }

    for(int i=1;i<=m;i++){

    }
    return 0;
}
