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
    int vec=0;
    for(int i=1;i<n-1;i++){
        int c1=v[i]%2;
        int c2=v[i-1]%2;
        int c3=v[i+1]%2;
        if(c1==c2 && c2==c3){
            vec=1;
            break;
        }
    }
    if(vec==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
