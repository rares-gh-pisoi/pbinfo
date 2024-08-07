#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int m;
    if(a>b){
        m=b;
    }else{
        m=a;
    }
    int s=0;
    for(int d=1;d<=m/2;d++){
        if(a%d==0 && b%d==0){
            s+=d;
        }
    }
    cout<<s;
    return 0;
}
