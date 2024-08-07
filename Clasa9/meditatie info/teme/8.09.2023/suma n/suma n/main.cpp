#include <iostream>

using namespace std;

int main() {
    int n,x;
    cin>>n;
    int S=0;
    for (int i=1;i<=n;i++){
        cin>>x;
        S+=x;

    }
    cout<<S;

    return 0;
}
