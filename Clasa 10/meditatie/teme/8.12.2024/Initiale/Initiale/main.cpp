#include <iostream>

using namespace std;
char s[256];
int main()
{
    cin.getline(s,256);
    if(s[0]!=' '){
        s[0]-=32;
    }
    for(int i=1;s[i]!=0;i++)
        if(s[i]!=' ')
             if(s[i-1]==' '|| s[i+1]==' '|| s[i+1]==0)
                s[i]-=32;

    cout<<s;
    return 0;
}
