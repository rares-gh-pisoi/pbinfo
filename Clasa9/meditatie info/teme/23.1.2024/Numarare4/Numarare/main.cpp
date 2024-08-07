#include <iostream>

using namespace std;
int v[200];
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        int cmmdc;
        int c=v[i];
        int c2=v[n-1];
        while(c2!=0){
            int r=c%c2;
            c=c2;
            c2=r;
        }
        cmmdc=c;
        if(cmmdc==1){
            cnt++;
        }

    }
    cout<<cnt;
    return 0;
}
