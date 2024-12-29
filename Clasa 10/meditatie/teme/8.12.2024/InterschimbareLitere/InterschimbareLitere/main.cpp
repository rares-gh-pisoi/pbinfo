#include <iostream>
#include <cstring>
using namespace std;
char s[11];
int vocala(char ch){
    if(ch>='A' && ch<='Z'){
        ch+=32;
    }
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}
int main()
{
    cin>>s;
    int p1=-1,p2=-1;
    for(int i=0;s[i]!=0;i++){
        if(vocala(s[i])==1){
            p1=i;
            break;
        }
    }
    for(int i=strlen(s)-1;i>=0;i--){
        if(vocala(s[i])==0){
            p2=i;
            break;
        }
    }
    if(p1!=-1&&p2!=-1){
        swap(s[p1],s[p2]);
        cout<<s;
    }else{
        cout<<"IMPOSIBIL";
    }
    return 0;
}
