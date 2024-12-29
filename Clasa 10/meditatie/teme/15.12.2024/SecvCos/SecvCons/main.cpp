#include <iostream>

using namespace std;
int vocala(char k){
    if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u'){
        return 0;
    }else{
        return 1;
    }
}
char ch[300];
int main()
{
    cin>>ch;
    int dr=1;
    int lg=0;
    int lgmax=-1;
    for(int i=0;ch[i]!='\0';i++){
        if(vocala(ch[i])==1){
            lg++;
        }else{
            lg=0;
        }
        if(lg>=lgmax){
            lgmax=lg;
            dr=i;
        }
    }
    int st=dr-lg+1;
    for(int i=st;i<=dr;i++){
        cout<<ch[i];
    }
    return 0;
}
