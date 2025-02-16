#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
    int n;
    cin>>n;
    cin.get();
    cin>>s;
    int lg=strlen(s);
    for(int i=0;i<lg-n+1;i++){
        char t[256]={};
        strncpy(t,s,i);
        strcat(t,s+n+i);
        cout<<t<<"\n";
    }
    return 0;
}
