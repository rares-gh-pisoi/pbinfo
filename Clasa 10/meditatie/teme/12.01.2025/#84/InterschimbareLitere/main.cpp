#include <iostream>
#include <cstring>
using namespace std;
char s[11];
int main()
{
    cin>>s;
    int pv=-1,uc=-1;
    for(int i=0;s[i]!=0;i++){
        if(strchr("aeiouAEIOU",s[i])!=NULL && pv==-1){
            pv=i;
        }else if(strchr("aeiouAEIOU",s[i])==NULL)
            uc=i;
    }
    if(pv==-1 || uc==-1){
        cout<<"IMPOSIBIL";
    }else{
        swap(s[pv],s[uc]);
        cout<<s;
    }
    return 0;
}
