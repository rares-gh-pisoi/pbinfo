#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        int nr;
        cin>>nr;
        int cm=-1;
        while(nr!=0){
            int c=nr%10;
            if(c>cm){
                cm=c;
            }
            nr/=10;
        }
        if(cm%2==1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
