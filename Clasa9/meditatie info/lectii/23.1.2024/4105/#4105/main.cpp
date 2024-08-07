#include <iostream>

using namespace std;
int v[1000];
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int nrd=2;
        for(int d=2;d*d<=x;d++){
            if(x%d==0){
                if(d!=x/d){
                    nrd+=2;
                }else{
                    nrd++;
                }
            }

        }
        v[i]=nrd;
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
