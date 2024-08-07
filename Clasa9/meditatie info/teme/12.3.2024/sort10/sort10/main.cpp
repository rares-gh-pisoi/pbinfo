#include <iostream>

using namespace std;
int v[1000];
int main() {
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]%10==0) {
            cnt++;
        }
    }
    int ok;
    do {
        ok=1;
        for(int i=0; i<n-1; i++) {
            if(v[i]<v[i+1]) {
                ok=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    } while(ok==0);
    if(cnt==0) {
        cout<<"NU EXISTA";
    } else {
        for(int i=0; i<n; i++) {
            if(v[i]%10==0) {
                cout<<v[i]<<" ";
            }
        }
    }
    return 0;
}
