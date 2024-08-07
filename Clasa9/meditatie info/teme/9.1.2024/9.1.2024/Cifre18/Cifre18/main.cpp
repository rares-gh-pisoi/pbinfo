#include <iostream>

using namespace std;

int main() {


    int n, k;
    cin>>n>>k;


    int cn = n;
    int tc = 0;
    while(cn!=0) {
        cn/=10;
        tc ++;
    }

    int m=0;
    int cnt=0;
    while(n!=0) {
        int c=n%10;

        int t=1;
        int cocnt=cnt;
        while(cocnt!=0) {
            t*=10;
            cocnt--;
        }

        if (tc - cnt == k) {
            if (c <9) {
                c++;
            } else {
                c= 0;
            }
        }

        m=t*c+m;

        n/=10;
        cnt++;
    }
    cout<<m;

    return 0;
}
