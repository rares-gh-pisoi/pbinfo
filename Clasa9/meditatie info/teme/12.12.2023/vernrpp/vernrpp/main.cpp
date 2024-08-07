#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int d=1;d*d<=n;d++){
        if(n%d==0){
            if(d!=n/d){
                cnt+=2;
            }else{
                cnt++;
            }
        }
    }
    if(cnt%2==1){
        cout<<"da";
    }else{
        cout<<"nu";
    }
    return 0;
}
