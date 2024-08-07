#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dispmin=INT_MAX;
    int poz;
    for(int i=1;i<=n;i++){
        int b,f;
        cin>>b>>f;
        int disp=b-f;
        if(disp<0){
            disp=disp*(-1);
        }
        if(disp<=dispmin){
            dispmin=disp;
            poz=i;
        }
    }
    cout<<poz;
    return 0;
}
