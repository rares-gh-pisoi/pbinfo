#include <iostream>

using namespace std;
int sum_div(int n){
    int s=0;
    for(int d=1;d*d<=n;d++){
        if(n%d==0){
            if(d!=n/d){
                s=s+d+n/d;
            }else{
                s+=d;
            }
        }
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum_div(n);
    return 0;
}
