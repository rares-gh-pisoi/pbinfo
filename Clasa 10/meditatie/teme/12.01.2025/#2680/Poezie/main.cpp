#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256],t[256];
    int n;
    cin>>n;
    cin.get();
    for(int i=1;i<=n;i++){
        cin.getline(s,256);
        for(int j=strlen(s)-2;j>=0;j--){
            if(strchr(".,?!",s[j])!=NULL){
                strcpy(t,s+j+1);
                strcpy(s+j,t);
            }

        }
        cout<<s<<"\n";
    }
    return 0;
}
