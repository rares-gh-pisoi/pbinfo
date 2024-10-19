#include <iostream>
#include <algorithm>
using namespace std;
int v[101];
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++) {
        cin>>v[i];
    }
    sort(v+1,v+m+1);
    int cnt=0;
    for(int i=m; i>=1; i--) {
        if(n>=v[i]) {
            cnt++;
            n-=v[i];
        } else if(n<v[i] && n!=0){
            cnt++;
            n=0;
            break;
        }else{
            break;
        }
    }

    if(cnt==0)
        cout<<"imposibil";
    else
        cout<<cnt;
    return 0;
}
