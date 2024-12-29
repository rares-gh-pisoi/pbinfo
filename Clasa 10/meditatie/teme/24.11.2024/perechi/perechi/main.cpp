#include <iostream>
#include <climits>
using namespace std;
int v[1001];
int main()
{
    int n,dif;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int dmin=INT_MAX;
    int st,dr;
    for(int i=1;i<=n;i++){
        if(i==n){
            dif=v[n]-v[1];
            if(dif<0)
                dif*=-1;
            if(dif<dmin){
                dmin=dif;
                st=1;
                dr=n;
            }
        }else{
            dif=v[i+1]-v[i];
            if(dif<0)
                dif*=-1;
            if(dif<dmin){
                dmin=dif;
                st=i;
                dr=i+1;
            }
        }
    }
    cout<<st<<" "<<dr;
    return 0;
}
