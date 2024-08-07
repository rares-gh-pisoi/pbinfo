#include <iostream>

using namespace std;
int v[200];
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int scif=0;
        while(x!=0){
            int cf=x%10;
            scif+=cf;
            x/=10;
        }
        v[i]=scif;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(v[i]==v[j]){
                cnt++;
            }

        }
    }
    cout<<cnt;
    return 0;
}
