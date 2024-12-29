#include <iostream>

using namespace std;
char ch[256];
int main()
{
    cin.getline(ch,256);
    if(ch[0]>=65  && ch[0]<=90){
        cout<<ch[0];
    }
    for(int i=1;ch[i]!='\0';i++){
        if(ch[i-1]==' ' && (ch[i]>=65 && ch[i]<=90)){
            cout<<ch[i];
        }
    }
    return 0;
}
