#include <iostream>
#include <cstring>
using namespace std;
char s[256], t[256];
int main()
{
    cin.getline(s,256);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z') {
            if(strchr(t,s[i])==NULL){
                cout<<s[i]<<" ";
                strncat(t, s + i, 1);

            }
        }
    }
    return 0;
}
