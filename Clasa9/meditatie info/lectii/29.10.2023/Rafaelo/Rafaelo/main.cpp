#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,S,p;
    cin>>S>>n;
    int MAX=INT_MIN;
    int ap=0;
    int c;
    for (int i=1;i<=n;i++){
        cin>>p;
        c=/p;
        if (c>MAX){
            MAX=c;
            ap=i;
        }

    }
    cout<<MAX<<" "<<ap;
    return 0;
}
