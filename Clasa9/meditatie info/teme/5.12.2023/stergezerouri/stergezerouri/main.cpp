#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int nfz=n;
    while(n%10==0){
        n/=10;
        nfz=n;
    }
    cout<<nfz;
    return 0;
}
