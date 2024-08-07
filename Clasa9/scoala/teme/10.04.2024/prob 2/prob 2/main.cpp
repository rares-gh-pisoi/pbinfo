#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int pr=1;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x%6==0){
            pr*=x;
        }
    }
    cout<<pr;
    return 0;
}
