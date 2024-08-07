#include <iostream>

using namespace std;
int v[1001];
int main()
{
    int n;
    cin>>n;
    int pal=1;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v[i]=x;
    }
    for(int i=1;i<=n/2;i++){
        if(v[i]!=v[n-i+1]){
            pal=0;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i];
    }
    cout<<"\n";
    if(pal==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
