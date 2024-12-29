#include <iostream>

using namespace std;
char s[260];
int IndexOf(char s[], char ch){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==ch)
            return ch;
        i++;
    }
    return -1;
}
int LastIndexOf(char s[], char ch){
    int i=0,poz=-1;
    while(s[i]!='\0'){
        if(s[i]==ch){
            poz=i;
        }
        i++;
    }
    return poz;
}
int NthIndex(char s[], char ch, int k){
    int i=0,poz=-1;
    while(s[i]!='\0'){
        if(s[i]==ch){
            k--;
        }
        if(k==0){
            poz=i;
        }
        i++;
    }
    return poz;
}
int main()
{

    return 0;
}
