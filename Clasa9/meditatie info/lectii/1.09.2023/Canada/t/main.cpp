#include <iostream>

using namespace std;

int main()
{
    int m;
    cin>>m;
    while (m%2==0)
        m/=2;
    cout<<m;
    return 0;
}
