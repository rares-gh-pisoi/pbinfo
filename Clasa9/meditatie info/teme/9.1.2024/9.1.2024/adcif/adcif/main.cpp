#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cmax=-1;
    int s=0;
    while(n!=0){
        int c=n%10;
        if(c>cmax){
            cmax=c;
            s+=c;
        }
        n/=10;
    }
    cout<<s;
    return 0;
}
