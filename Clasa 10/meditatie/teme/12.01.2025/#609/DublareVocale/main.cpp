#include <iostream>
#include <cstring>
using namespace std;
char s[101],t[101];
int main()
{
    cin.getline(s,101);
    for(int i=0;s[i]!='\0';i++){
        if(strchr("aeiou",s[i])!=NULL){
            cout<<s[i];
        }
        cout<<s[i];
    }
    return 0;
}
