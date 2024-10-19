#include <iostream>

using namespace std;
int ap[902];
int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if(x>99 && x<1000)
            ap[x]=1;
    }
    int a,b;
    a=0;
    b=0;
    for(int i=999; i>=100 && a==0; i--) {
        if(ap[i]==0) {
            if(b==0)
                b=i;
            else
                a=i;

        }
    }
    if(a!=0) {
        cout<<a<<" "<<b;
    } else {
        cout<<"NU EXISTA";
    }
    return 0;
}
