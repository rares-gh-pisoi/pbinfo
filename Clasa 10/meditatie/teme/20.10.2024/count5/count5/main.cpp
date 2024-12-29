#include <iostream>

using namespace std;
int sumacifre(int n){
    int s=0;
    while(n!=0){
        int c=n%10;
        n/=10;
        s+=c;
    }
    return s;
}
int ap[82];
int main()
{
    int n;
    cin>>n;
    long long cnt=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        int scif=sumacifre(x);
        cnt+=ap[scif];
        ap[scif]++;
    }
    cout<<cnt;
    return 0;
}
