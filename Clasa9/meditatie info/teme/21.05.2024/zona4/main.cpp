#include <iostream>

using namespace std;
int a[201][201];
int main() {
    int n,z;
    cin>>n>>z;
    int s1=0,s2=0,s3=0,s4=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin>>a[i][j];
            if(j>i && i+j<n+1) {
                s1+=a[i][j];
            }
            if(j>i && i+j>n+1) {
                s2+=a[i][j];
            }
            if(j<i && i+j>n+1) {
                s3+=a[i][j];
            }
            if(j<i && i+j<n+1) {
                s4+=a[i][j];
            }
        }
    }
    switch(z%4) {
    case 0:
        cout<<s4;
        break;
    case 1:
        cout<<s1;
        break;
    case 2:
        cout<<s2;
        break;

    case 3:
        cout<<s3;
        break;
    }
    return 0;
}
