#include <iostream>
#include <cstring>
using namespace std;
char ch[300];
int ap[300];
int main()
{
    cin.getline(ch,300);
    int apmax=0;
    char val;
    for(char c='a';c<='z';c++){
        int cnt=0;
        for(int i=0;ch[i]!='\0';i++){
            if(ch[i]==c){
                cnt++;
            }
        }
        if(cnt>apmax){
            apmax=cnt;
            val=c;
        }
    }
    cout<<val;
    return 0;
}