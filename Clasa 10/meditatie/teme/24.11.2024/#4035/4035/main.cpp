#include <iostream>

using namespace std;
int a[10001];
long long NrSecvS(int a[], int n, int S){
    int sum=0;
    long long lg=0;
    int st=1;
    for(int dr=1;dr<=n;dr++){
        sum+=a[dr];
        while(sum>S){
            sum-=a[st];
            lg+=n-dr+1;
            st++;
        }
    }
    return lg;
}
int main()
{
    int x,F;
    cin>>x>>F;
    for(int i=1;i<=x;i++){
        cin>>a[i];
    }
    cout<<NrSecvS(a,x,F);
    return 0;
}
