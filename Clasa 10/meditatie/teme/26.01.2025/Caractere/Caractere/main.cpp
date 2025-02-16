#include <iostream>
#include <cstring>
using namespace std;
char v[251],g[251];
int main()
{
    cin>>v>>g;
    for(int i=0;v[i]!='\0';i++){
        if(strchr(g,v[i])!=NULL){
            cout<<v[i];
        }
    }
    return 0;
}
