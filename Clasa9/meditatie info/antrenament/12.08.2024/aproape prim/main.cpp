#include <iostream>

using namespace std;
int prim(int n){
    int pr=1;
    if(n<2){
        pr=0;
    }else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                pr=0;
                break;
            }
        }
    }
    return pr;
}
int a_prim(int x) {
    int aprim=0;
    for(int d=1; d*d<=x; d++) {
        if(x%d==0) {
            if(prim(d)==1 && prim(x/d)==1){
                aprim=1;
                break;
            }

        }
    }
    return aprim;
}
int main() {
    int n;
    cin>>n;
    cout<<a_prim(n);
    return 0;
}
