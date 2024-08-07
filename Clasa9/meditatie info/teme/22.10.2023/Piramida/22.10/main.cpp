#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int MAX = INT_MIN;
    int MIN = INT_MAX;
    for (int i=1;i<=n;i++){
        cin>>x;
        if (x>MAX)
            MAX=x;
        if (x<MIN)
            MIN=x;
    }
    cout<<MIN+MAX;
    return 0;
}
