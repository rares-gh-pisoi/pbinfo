#include <iostream>

using namespace std;
int v[1000],n,i;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n/2;i++){

        cout<<v[i]<<" "<<v[n-i+1]<<" ";
    }
    if(n%2!=0){
        cout<<v[(n+1)/2];
    }
    return 0;
}
