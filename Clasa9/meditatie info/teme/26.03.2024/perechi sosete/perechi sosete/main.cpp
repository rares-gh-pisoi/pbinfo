#include <iostream>

using namespace std;
int ap[100];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int nr;
        cin>>nr;
        if(nr<=100 && nr!=0){
            ap[nr]++;
        }
    }
    int cnt=0;
    for(int i=1;i<=100;i++){
        if(ap[i]!=0){
            if(ap[i]/2!=0){
                cnt+=ap[i]/2;
            }
        }
    }
    cout<<cnt;
    return 0;
}
