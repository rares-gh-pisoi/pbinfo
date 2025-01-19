#include <iostream>

using namespace std;
char c[51];
int main()
{
    cin.getline(c,51);
    for(int i=0;c[i]!='\0';i++){
        if((c[i]>='A' && c[i]<='Z') || (c[i]>='a' && c[i]<='z')){
            cout<<c[i];
        }
    }
    return 0;
}
