#include <iostream>
#include <cstring>
using namespace std;
char s[256];
int main()
{
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(strchr("aeiou",s[i])==NULL){
            cout<<s[i];
        }
    }
    return 0;
}
