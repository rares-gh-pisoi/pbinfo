#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if (x<10)
        cout<<1;
    else
        if(x<100)
        cout<<2;
    else
        if(x<=999)
        cout<<3;
    return 0;
}
