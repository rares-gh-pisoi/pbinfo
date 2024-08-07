#include <iostream>

using namespace std;
int v[100];
int main() {
    int n;
    cin>>n;
    for(int i=0; i<2*n; i++) {
        cin>>v[i];
    }
    int nri=0;
    for(int i=0;i<n;i++){
        int x=v[i];
        for(int j=n;j<2*n;j++){
            if(x==v[j]){
                nri=1;
                cout<<x<<" ";
            }
        }
    }
    if(nri==0){
        cout<<"nu exista";
    }

    return 0;
}
