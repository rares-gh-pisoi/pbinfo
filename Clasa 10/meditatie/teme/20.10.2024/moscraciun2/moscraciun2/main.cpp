#include <iostream>
#include <algorithm>
using namespace std;
int v[101];
int b[101];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>v[i]>>b[i];
    }
    sort(v+1,v+n+1);

    return 0;
}
