#include <iostream>

using namespace std;
int a[5][25];
int main() {
    for(int i=1; i<=4; j++) {
        if(a[1][i]==2024 && a[4][i]==2024) {
            cout<<i<<" ";
        }
    }
    return 0;
}
