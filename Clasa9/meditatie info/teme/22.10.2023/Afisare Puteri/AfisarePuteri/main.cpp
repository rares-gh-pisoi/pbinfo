#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n1,n2;
    cin>>n1;
    cin>>n2;
    for (int i=0;pow(n1,i)<=n2;i++){
        cout<<(long long) pow(n1,i)<<" ";
    }
    return 0;
}
