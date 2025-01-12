#include <iostream>
#include <cstring>
using namespace std;
char s[256],t[256];
int main()
{
    int n;
    cin>>n;
    cin.get();
    for(int i=1;i<=n;i++){
        cin.getline(s,256);
        int k=strlen(s)-1;
        for(int j=0;s[j]!='\0';j++){
            if(strchr(".,?!",s[j])!=NULL && s[j]!=s[k]){
                strcpy(t,s+j+1);
                strcpy(s+j,t);
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}
