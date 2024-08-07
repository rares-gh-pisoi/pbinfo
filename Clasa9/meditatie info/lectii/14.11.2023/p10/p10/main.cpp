#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char c,r;
    cin>>c>>r;
    for(int i=1;i<=n;i++){
       if(i==1 || i==n){
            for(int j=1;j<=n;j++){
                cout<<c;
            }
            cout<<"\n";
       }
        else{
            cout<<c;
            for(int u=1;u<=n-2;u++){
                cout<<r;
            }
            cout<<c;
            cout<<"\n";
        }



    }
    return 0;
}
