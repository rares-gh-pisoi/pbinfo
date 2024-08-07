#include <iostream>

using namespace std;
int v[500];
int main()
{
    int n;
    cin>>n;
    int cresc=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            cresc=0;
        }
    }
    if(cresc==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
