#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max1=INT_MIN;
    int max2=INT_MIN;
    int min1=INT_MAX;
    int min2=INT_MAX;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x>max1){
            max2=max1;
            max1=x;
        }else if(x>max2){
            max2=x;
        }
        if(x<min1){
            min2=min1;
            min1=x;
        }else if(x<min2){
            min2=x;
        }
    }
    long long p1=(1LL*max1)*(1LL*max2);
    long long p2=(1LL*min1)*(1LL*min2);
    if(p1>p2){
        cout<<p1;
    }else{
        cout<<p2;
    }
    return 0;
}
