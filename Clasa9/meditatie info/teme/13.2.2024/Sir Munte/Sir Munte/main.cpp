#include <iostream>

using namespace std;
int v[1000];
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int munte=1;
    int pc=0;
    int pd=0;
    for(int i=0; i<n-1; i++) {
        if(v[i]<v[i+1]) {
            pc++;
            if(pd!=0){
                munte=0;
                break;
            }
        }else if(v[i]>v[i+1]) {
            pd++;
        }else{
            munte=0;
            break;
        }

    }
    if(pc==0 || pd==0) {
        munte=0;
    }
    if(munte==1) {
        cout<<"DA";
    } else {
        cout<<"NU";
    }
    return 0;
}
