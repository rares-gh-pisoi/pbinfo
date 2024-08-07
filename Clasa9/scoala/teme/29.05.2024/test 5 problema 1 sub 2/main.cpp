#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int y=0;
    while(x!=0){
        while(x>9)
            x/=10;
        y=y*10+x;
        cin>>x;
    }
    cout<<y;
    return 0;
}
