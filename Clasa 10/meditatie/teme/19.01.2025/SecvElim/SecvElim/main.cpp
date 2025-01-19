#include <iostream>
#include <cstring>
using namespace std;
char c[256],t[256];
int verif(char l,char h){
    return l==h || l==h+32 || l==h-32;
}
int main()
{
    cin>>c;
    for(int i=0;c[i]!='\0';i++){
        if(verif(c[i],c[i+1])==1){
            int j=i+1;
            while(verif(c[i],c[j])==1){
                j++;
            }
            strcpy(t,c+j);
            strcpy(c+i,t);
            if(i==0){
                i--;
            }else{
                i-=2;
            }
        }
    }
    cout<<c;
    return 0;
}
