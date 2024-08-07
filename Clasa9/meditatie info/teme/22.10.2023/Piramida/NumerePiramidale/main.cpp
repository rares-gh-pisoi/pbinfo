#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int nrpi=0;
    for (int i=1;i<=n;i++){
        nrpi+= pow (i,2);
        cout<<nrpi<<" ";
    }
    return 0;
}
