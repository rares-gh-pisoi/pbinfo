#include <iostream>

using namespace std;
int v[20];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int lg=1;
    int lgmax=1;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            lg++;
        }else{
            lg=1;
        }
        if(lg>lgmax){
            lgmax=lg;
        }
    }
    cout<<lgmax;
    return 0;
}
