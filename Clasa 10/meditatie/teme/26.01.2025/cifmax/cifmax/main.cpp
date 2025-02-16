#include <iostream>
#include <cstring>
using namespace std;
char v[61];
int s[11];
int main() {
    cin.getline(v,61);
    for(int i=1; v[i]!='\0'; i++) {
        if(v[i]>='0' && v[i]<='9') {
            s[v[i]-'0']++;
        }
    }
    int apmax=0;
    for(int i=0; i<=9; i++) {
        if(s[i]>apmax)
            apmax=s[i];
    }
    if(apmax==0)
        cout<<"NU";
    else {
        for(int i=0; i<=9; i++)
            if(s[i]==apmax) {
                cout<<i;
                return 0;
            }
    }
    return 0;
}
