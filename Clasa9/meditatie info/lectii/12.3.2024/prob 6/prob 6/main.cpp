#include <iostream>

using namespace std;
int v[100];
int a[100];
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int ogl=0;
        int cv=v[i];
        while(cv!=0){
            int c=cv%10;
            ogl=ogl*10+c;
            cv/=10;
        }
        if(v[i]==ogl){
            cnt++;
            a[cnt]=v[i];
        }
    }
    if(cnt==0){
        cout<<"imposibil";
    }else{
        for(int i=0;i<cnt;i++){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
