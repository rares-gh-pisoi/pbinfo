#include <iostream>

using namespace std;

int main()
{
    int n,s;
    cin>>n;
    while(n!=0){
        s=0;
        for(int d=1;d<=n/2;d++){
            if(n%d==0){
                s+=d;
            }
        }
        if(s%n==0)
            cout<<n<<endl;
        cin>>n;
    }
    return 0;
}
