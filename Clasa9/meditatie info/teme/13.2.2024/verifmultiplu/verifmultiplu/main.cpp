#include <iostream>

using namespace std;
int v[100];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int multiplu=1;
    for(int i=0;i<n-1;i++){
        if(v[i]%v[n-1]!=0){
            multiplu=0;
            break;
        }
    }
    if(multiplu==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
