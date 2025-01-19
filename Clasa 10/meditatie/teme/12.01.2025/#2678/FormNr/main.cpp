#include <iostream>

using namespace std;
char s[256];
int main()
{
    cin.getline(s,256);
    int stot=0,scur=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0' && s[i]<='9'){
            int valnum=s[i]-'0';
            scur=scur*10+valnum;
        }else{
            if(scur!=0){
                stot+=scur;
            }
            scur=0;
        }
    }
    cout<<stot;
    return 0;
}
