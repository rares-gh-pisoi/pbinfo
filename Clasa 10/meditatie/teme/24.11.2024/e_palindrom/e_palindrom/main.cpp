#include <iostream>

using namespace std;
int ap[10001];
int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        ap[x]++;
    }
    int cnt=0;
    for(int i=1;i<=10000;i++){
        if(ap[i]%2==1){
            cnt++;
        }
    }
    if(cnt<2){
        cout<<"DA";
    }else{
        cout<<"NU";
    }
    return 0;
}
