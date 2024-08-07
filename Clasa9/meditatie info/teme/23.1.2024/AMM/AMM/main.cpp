#include <iostream>
#include <climits>
using namespace std;
int v[1001],n,i,emax,emin,ppoz,upoz;
int main()
{
    cin>>n;
    emax=INT_MIN;
    emin=INT_MAX;
    int maxpoz=0;
    int minpoz=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]>emax){
            emax=v[i];
            maxpoz=i;
        }
        if(v[i]<emin){
            emin=v[i];
            minpoz=i;
        }
    }
    if(maxpoz>minpoz){
        int r=maxpoz;
        maxpoz=minpoz;
        minpoz=r;
    }
    for(int i=1;i<=n;i++){
        if(i>=maxpoz && i<=minpoz){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
