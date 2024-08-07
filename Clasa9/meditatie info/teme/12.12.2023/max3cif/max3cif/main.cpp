#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int p3c=n%1000;
    int cmax=INT_MIN;
    while(n!=0){
        if(p3c>99 && p3c<=999){
            if(p3c>cmax){
                cmax=p3c;
            }
        }
        n/=10;
        p3c=n%1000;
    }
    cout<<cmax;
    return 0;
}
