#include <iostream>

using namespace std;
int nrcifre(int n){
    int cnt=0;
    if(n==0)
          return 1;
    while(n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}
int ap[11];
int main()
{
    int n;
    cin>>n;
    long long per=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        int nrcif=nrcifre(x);
        per+=ap[nrcif];
        ap[nrcif]++;
    }
    cout<<per;
    return 0;
}
