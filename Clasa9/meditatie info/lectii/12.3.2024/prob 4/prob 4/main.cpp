#include <iostream>

using namespace std;
int v[200];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int cv=v[i];
        int exp=0;
        while(cv%2==0){
            cv/=2;
            exp++;
        }
        if(cv==1){
            for(int j=n-1;j>i;j--){
                v[j+1]=v[j];
            }
            v[i+1]=exp;
            n++;
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
