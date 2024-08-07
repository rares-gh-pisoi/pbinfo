#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>k>>n;
    long long s=0;
    for(int i=1;i<=n;i++){
        int nr;
        cin>>nr;
        int cnr=nr;
        int sf=0;
        int f=2;
        while(nr>1){
            while(nr%f==0){
                sf++;
                nr/=f;
            }
            f++;
            if(nr>1 && f*f>nr){
                f=nr;
            }
        }
        if(sf>=k){
            s+=cnr;
        }
    }
    cout<<s;

    return 0;
}
