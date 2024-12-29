#include <iostream>

using namespace std;
char ch[21];
int main()
{
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'){
            ch[i]-=32;
            cout<<ch[i];
        }else{
            cout<<ch[i];
        }
    }
    return 0;
}
