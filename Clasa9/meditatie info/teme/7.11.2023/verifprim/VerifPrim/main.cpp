#include <iostream>

using namespace std;

int main()
{
    int n,d;
    cin>>n;
    int OK=1;
    for (d=2;d*d<=n;d++){
        if(n%d==0){
            OK=0;
            break;
        }
    }
    if((OK==1) && n>1){
        cout<<"DA";
    }else{
        cout<<"NU";
    }
    return 0;
}
