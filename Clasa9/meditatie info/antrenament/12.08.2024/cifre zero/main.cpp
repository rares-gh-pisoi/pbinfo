#include <iostream>

using namespace std;
int nr_cif_zero(int n) {
    int cnt=0;
    if(n==0) {
        return 1;
    } else {
        while(n!=0) {
            int c=n%10;
            n/=10;
            if(c==0) {
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    int n;
    cin>>n;
    cout<<nr_cif_zero(n);
    return 0;
}
