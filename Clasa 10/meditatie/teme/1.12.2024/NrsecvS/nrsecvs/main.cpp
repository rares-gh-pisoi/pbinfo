#include <iostream>

using namespace std;
long long NrSecvS(int a[], int n, int S){
    int st=1;
    int sum=0;
    int lg=0;
    for(int dr=1;dr<=n;dr++){
        sum+=a[dr];
        while(sum>s){
            sum-=a[st];
            lg+=n-dr+1;
            st++;
        }
    }
    return lg;
}
int main()
{

    return 0;
}
