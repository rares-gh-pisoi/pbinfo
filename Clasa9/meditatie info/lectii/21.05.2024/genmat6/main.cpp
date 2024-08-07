#include <iostream>

using namespace std;
int a[7][7];
int main() {
    int n;
    cin>>n;
    for(int i=1; i<=6; i++) {
        a[i][i]=0;
    }
    for(int i=1;i<6;i++) {
        for(int j=i+1;j<=6;j++){
            a[i][j]=a[j][i]=n%10;
        }
        n/=10;
    }
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
