#include <iostream>

using namespace std;
int v[100];
int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ok=0;
    for(int i=0;i<n;i++){
        if(v[i]==x && i%2==1){
            ok=1;
            break;
        }
    }
    if(ok==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
