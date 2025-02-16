#include <iostream>
#include <algorithm>
using namespace std;
struct copil{
    int h;
    int poz;
}v[1001];
int cmp(copil a,copil b){
    return a.h<b.h;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i].h;
        v[i].poz=i;
    }
    sort(v+1,v+n+1,cmp);
    for(int i=1;i<=n;i++){
        cout<<v[i].poz<<" ";
    }
    return 0;
}
