#include <iostream>

using namespace std;
char ch[256];
int ver(char i){
    if(i!='a' && i!='e' && i!='o' && i!='u'){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    cin>>ch;
    int cns=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ver(ch[i])==0){
            cout<<"NU";
            return 0;
        }else{
            if(ch[i]!='i'){
                cns++;
            }
        }
    }
    if(cns!=0)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
