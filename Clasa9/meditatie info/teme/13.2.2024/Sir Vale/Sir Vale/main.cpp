#include <iostream>

using namespace std;
int v[1000];
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>v[i];

    }
    int vale=1;
    int pd=0;
    int pc=0;
    for(int i=0; i<n-1; i++) {
        if(v[i]>v[i+1]) {
            pd++;
            if(pc!=0) {
                vale=0;
                break;
            }
        }else if(v[i]<v[i+1]){
            pc++;
        }else{
            vale=0;
            break;
        }
    }
    if(pd==0 || pc==0){
        vale=0;
    }
    if(vale==1) {
        cout<<"DA";
    } else {
        cout<<"NU";
    }
    return 0;
}
