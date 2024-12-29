#include <iostream>

using namespace std;
char ch[300];
int main()
{
    cin.getline(ch,300);
    int apmax=0;
    char cif;
    for(char c='0';c<='9';c++){
        int cnt=0;
        for(int i=0;ch[i]!='\0';i++){
            if(ch[i]==c){
                cnt++;
            }
        }
        if(cnt>apmax){
            apmax=cnt;
            cif=c;
        }
    }
    if(apmax==0){
        cout<<"NU";
    }else{
        cout<<cif;
    }
    return 0;
}
