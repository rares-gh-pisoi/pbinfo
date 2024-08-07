#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int k;
    cin>>k;
    int pr=1;
    int ncf=0;
    while(n>1){
        int cf=n%10;
        if(cf!=k) {
            pr*=cf;
            ncf++;
        }
        n/=10;
    }
    if(ncf==0){
        cout<<0;
    }else{
        cout<<pr;
    }

    return 0;
}
