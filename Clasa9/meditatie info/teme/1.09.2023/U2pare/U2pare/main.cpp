#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if (x%2==1)
        cout<<x+1<<" "<<x+3;
    else
        cout<<x+2<<" "<<x+4;
    return 0;
}
