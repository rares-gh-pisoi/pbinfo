#include <iostream>
#include <cstring>
using namespace std;
char s[256],t[256];
int main()
{
    cin.getline(s,256);
    char vocale[]="aeiou";
    for(int p=strlen(s)-1;p>=1;p--){
        if(strchr(vocale,s[p])!=NULL && strchr(vocale,s[p-1])!=NULL){
//            cout<<s[p]<<" -- Sunt 2 vocale cons"<<"\n";
            if(p > 1 && strchr(vocale,s[p-2])!=NULL){
//                cout<<"Stergem doar o vocala\n";
                strcpy(t,s+p+1);
                strcpy(s+p,t);
//                cout<<s<<"\n";
            }else{
//                cout<<"Stergem 2 vocale\n";
//                cout<<s<<"\n";
                strcpy(t,s+p+1);
//                cout<<"pastram '" << t << "'\n";
//                cout<<"eliminam '" << s + p - 1 << "'\n";

                strcpy(s + p -1,t);

//                cout<<s<<"\n";
            }
        }
    }
    cout<<s;
    return 0;
}
