#include <iostream>
#include <cstring>
using namespace std;
char c[256],voc[]="AEIOU";
int g[256];
int main()
{
    cin.getline(c,256);
    for(int i=1;c[i]!='\0';i++){
        if(c[i]>='a' && c[i]<='z')
            c[i]-=32;
        if(strchr(voc,c[i])!=NULL){
            g[c[i]]++;
        }
    }
    int apmax=-1;
    for(int i=0;voc[i]!='\0';i++){
        if(g[voc[i]]>apmax){
            apmax=g[voc[i]];
        }
    }
    for(int i=0;voc[i]!='\0';i++){
        if(g[voc[i]]==apmax){
            cout<<voc[i];
            break;
        }
    }
    return 0;
}
