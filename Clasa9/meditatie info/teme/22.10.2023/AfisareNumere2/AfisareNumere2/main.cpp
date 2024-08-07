#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"\n";

    for (int j=n;j>0;j--)
        cout<<j<<" ";
    return 0;
}
