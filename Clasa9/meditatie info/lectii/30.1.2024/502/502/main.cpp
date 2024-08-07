#include <iostream>

using namespace std;
int v[500];
int main()
{
    int n;
    cin>>n;
    int diferit=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                diferit=0;
            }
        }
    }
    if(diferit==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
