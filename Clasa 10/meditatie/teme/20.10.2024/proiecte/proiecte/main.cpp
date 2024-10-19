#include <iostream>

using namespace std;
int v[1001];
int b[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        b[i]=v[i];
    }
    sort(b+1,b+n+1);

    return 0;
}
