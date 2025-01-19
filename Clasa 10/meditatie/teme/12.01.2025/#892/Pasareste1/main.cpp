#include <iostream>
#include <cstring>
using namespace std;
char s[256],t[256];
int main()
{
    cin.getline(s,256);
    for(int i=0;s[i]!='\0';i++){
        if(strchr("aeiou",s[i])!=NULL){
            strcpy(t,s+i+2);
            strcpy(s+i,t);
        }
    }
    cout<<s;
    return 0;
}
