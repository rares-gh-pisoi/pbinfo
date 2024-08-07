#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int C=100-((100-a)+(100-b));
    if(C<0)
        cout<<0;
    else
        cout<<C;
    return 0;
}
