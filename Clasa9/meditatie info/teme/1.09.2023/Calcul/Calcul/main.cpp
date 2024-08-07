#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if (x<=15)
        cout<<x*x;
    else
        if (x>=16 and x<=30)
        cout<<(x/10)+(x%10);
    else
        if(x<=99)
        cout<<(x/10)*(x%10);
    return 0;
}
