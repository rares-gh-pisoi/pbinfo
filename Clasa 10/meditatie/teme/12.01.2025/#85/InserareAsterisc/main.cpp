#include <iostream>
#include <cstring>
using namespace std;
char s[101],t[101];
int main()
{
    cin.getline(s,101);
    int k=0,cnt=0;
    for(int i=0;s[i]!='\0';i++){
        t[k++]=s[i];
        if(strchr("aeiou",s[i])!=NULL){
            t[k++]='*';
            cnt++;
        }
    }
    t[k]=0;
    if(cnt==0){
        cout<<"FARA VOCALE";
    }else{
        strcpy(s,t);
        cout<<s;
    }
    return 0;
}
