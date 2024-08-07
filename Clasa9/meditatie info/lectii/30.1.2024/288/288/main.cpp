#include <iostream>

using namespace std;
int v[100];
int main()
{
    int n;
    cin>>n;
    int pare=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==1){
            pare=0;
        }
    }
    if(pare==1){
        cout<<"DA";
    }else{
        cout<<"NU";
    }
    return 0;
}
