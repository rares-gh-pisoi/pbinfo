#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int ogl=0;
    int cn=n;
    int cnt=0;
    while(cn!=0) {
        int c=cn%10;
        ogl=ogl*10+c;
        cnt++;
        cn=cn/10;
    }
    cnt=cnt/2;
    while(cnt>0) {
        int pc=ogl%10;
        int uc=n%10;
        ogl/=10;
        n/=10;
        cout<<pc<<" "<<uc<<"\n";
        cnt--;
    }


    return 0;
}
