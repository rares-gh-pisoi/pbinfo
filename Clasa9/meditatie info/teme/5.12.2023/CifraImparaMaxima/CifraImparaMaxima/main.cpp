#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cmip=-1;
    while(n>1){
        int cf=n%10;
        if(cf%2==1 && cmip<cf){
            cmip=cf;
        }
        n/=10;
    }
    if(cmip==-1){
        cout<<"nu exista";
    }else{
        cout<<cmip;
    }
    return 0;
}
