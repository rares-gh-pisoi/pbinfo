#include <iostream>

using namespace std;
int a_prim(int n) {
    int aprim=0;
    for(int d=1; d*d<=n; d++) {
        if(n%d==0) {
            int prim1=1;
            int prim2=1;
            if(d<2) {
                prim1=0;
            }else{
                for(int f=1;f*f<=d;f++){
                    if(d%f==0){
                        prim1=0;
                        break;
                    }
                }
            }
            if(n/d<2) {
                prim2=0;
            }else{
                for(int f=1;f*f<=n/d;f++){
                    if(n/d%f==0){
                        prim2=0;
                        break;
                    }
                }
            }
            if(prim1==1 && prim2==1){
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
