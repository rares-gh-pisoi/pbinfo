#include <iostream>

using namespace std;
int v[1000];
int main()
{
    int n;
    cin>>n;
    int alt=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]!=0 && v[i-1]!=0){
            alt=0;
        }
    }
    if(alt==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
