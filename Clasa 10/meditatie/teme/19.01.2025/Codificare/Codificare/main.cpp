#include <iostream>
#include <cstring>
using namespace std;
char c[101],s[101],t[101];
int main()
{
    cin>>s>>c;
    int k=0;
    if(strlen(s)!=strlen(c)){
        cout<<"cod incorect";
        return 0;
    }
    for(int i=strlen(s)-1;i>=0;i--){
        if(c[i]%2==0){
            t[k++]=s[i];
        }
    }
    for(int i=0;s[i]!='\0';i++){
        if(c[i]%2==1){
            t[k++]=s[i];
        }
    }
    t[k]=0;
    cout<<t;
    return 0;
}
