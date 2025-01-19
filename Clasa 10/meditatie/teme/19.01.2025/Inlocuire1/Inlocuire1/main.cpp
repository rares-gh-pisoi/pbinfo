#include <iostream>
#include <cstring>
using namespace std;
char s[256],t[256];
int main() {
    cin.getline(s,256);
    for(int i=0; s[i]!='\0'; i++) {
        if(s[i]!=' ') {
            int j=i+1;
            while(s[j]!=' ' && s[j]!='\0') {
                j++;
            }
            if(j-i==3) {
                s[i]='*';
                strcpy(t,s+j);
                strcpy(s+i+1,t);
            }else{
                i=j-1;
            }
        }
    }
    cout<<s;
    return 0;
}
