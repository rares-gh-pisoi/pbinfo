#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long S=0;
    for(int i=1;i<=n;i++){
        S+=i;
    }
    cout<<S;
    return 0;
}
