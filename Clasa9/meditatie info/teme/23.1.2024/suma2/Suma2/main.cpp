#include <iostream>

using namespace std;
int v[1001],n,i,ppoz,upoz,modif;
int main() {
    cin>>n;
    ppoz=0;
    long long s=0;
    modif=0;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        if(v[i]%2==0 && ppoz==0) {
            ppoz=i;
        }
        if(v[i]%2==0) {
            upoz=i;
        }
    }
    for(int i=1; i<=n; i++) {
        if(i>=ppoz && i<=upoz) {
            s+=v[i];
            modif++;
        }
    }
    if(modif==0) {
        cout<<"NU EXISTA";
    } else {
        cout<<s;
    }
    return 0;
}
