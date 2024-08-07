#include <iostream>
#include <climits>
using namespace std;
int v[20];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<n-1;i++){
        int s=v[i]+v[i+1];
        if(s>smax){
            smax=s;
        }
    }
    cout<<smax;
    return 0;
}
