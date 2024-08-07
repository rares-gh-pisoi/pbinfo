#include <iostream>

using namespace std;
int v[500];
int main() {
    int n;
    cin>>n;
    int egale=1;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]){
            egale=0;
        }
    }
    if(egale==1){
        cout<<"DA";
    }else{
        cout<<"NU";
    }
    return 0;
}
