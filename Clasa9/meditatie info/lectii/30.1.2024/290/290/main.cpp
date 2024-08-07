#include <iostream>

using namespace std;
int v[100];
int main()
{
    int n;
    cin>>n;
    int po=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ant=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0 && ant==0){
            ant=v[i];
        }else{
            if(v[i]%2==0 && v[i]<ant){
                po=0;
            }
            if(v[i]%2==0){
                ant=v[i];
            }
        }
    }
    if(po==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
