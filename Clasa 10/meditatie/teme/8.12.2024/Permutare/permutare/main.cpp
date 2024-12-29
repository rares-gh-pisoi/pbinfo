#include <iostream>
#include <algorithm>
using namespace std;
int v[101];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    sort(v+1,v+n+1);
    if(v[1]==0){
        cout<<"NU";
    }else{
        for(int i=1;i<=n;i++){
            if(v[i+1]-v[i]>1){
                cout<<"NU";
                return 0;
            }
        }
        cout<<"DA";
    }
    return 0;
}
