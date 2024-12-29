#include <iostream>

using namespace std;
int v[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        cout<<v[i];
    }
    cout<<"\n";
    for(int i=1;i<=n/2;i++){
        if(v[i]!=v[n-i+1]){
            cout<<"NU";
            return 0;
        }
    }
    cout<<"DA";
    return 0;
}
