#include <iostream>

using namespace std;
int prim(int n){
    if(n<2){
        return 0;
    }else{
        int prm=1;
        for(int d=2;d*d<=n;d++){
            if(n%d==0){
                prm=0;
                break;
            }
        }
        return prm;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<prim(n);
    return 0;
}
