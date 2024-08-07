#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ap=0;
    while (n!=0){
        if(n%2==1)
            ap++;
        cin>>n;
    }
    cout<<ap;
    return 0;
}
