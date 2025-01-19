#include <iostream>
#include <cstring>
using namespace std;
char s[256],t[256];
int main()
{
    cin.getline(s,256);
    for(int i=0;s[i]!='\0';i++){
        if(strchr("aeiou",s[i])!=NULL){
            strcpy(t,s+i);
            s[i+1]='p';
            strcpy(s+i+2,t);
            i=i+2;
        }
    }
    cout<<s;
    return 0;
}
