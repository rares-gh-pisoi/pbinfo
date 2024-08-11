#include <iostream>

using namespace std;
int sumcif(int n){
    int s=0;
    while(n!=0){
        int c=n%10;
        n/=10;
        s+=c;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumcif(n);
    return 0;
}
