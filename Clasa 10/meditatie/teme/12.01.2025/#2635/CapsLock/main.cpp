#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("capslock.in");
ofstream fout("capslock.out");
char s[256];
int main() {
    fin.getline(s,256);
    int ok=0;
    for(int i=0; s[i]!='\0'; i++) {
        if(s[i]=='#')
            ok=1-ok;
        else {
            if((s[i]>='a' && s[i]<='z') && ok==1) {
                s[i]-=32;
            }
            fout<<s[i];
        }
    }
    return 0;
}
