#include <iostream>

using namespace std;
int v[50];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int cz=v[i];
        cz=cz/10%10;
        if(cz==2 || cz==3){
            v[i]=23;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
