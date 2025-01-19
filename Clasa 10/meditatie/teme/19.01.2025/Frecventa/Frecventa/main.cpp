#include <iostream>

using namespace std;
char c[256];
int j[256];
int main()
{
    cin.getline(c,256);
    for(int i=0;c[i]!='\0';i++){
        if(c[i]>='a' && c[i]<='z'){
            j[c[i]]++;
        }
    }
    int apmax=-1;
    for(char i='a';i<='z';i++){
        if(j[i]>apmax){
            apmax=j[i];
        }
    }
    for(char i='a';i<='z';i++){
        if(j[i]==apmax){
            cout<<i;
            break;
        }
    }
    return 0;
}
