#include <iostream>
#include <climits>
using namespace std;
int v[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int i=1;
    while(i<=n){
        if(v[i]%2==0){
            for(int j=i;j<=n;j++){
                v[j]=v[j+1];
            }
            n--;
        }else{
            i++;
        }
    }
    for(i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
