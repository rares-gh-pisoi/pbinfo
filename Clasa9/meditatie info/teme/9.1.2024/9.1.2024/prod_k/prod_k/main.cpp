#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int nr;
    cin>>nr;
    int pr=1;
    int ncf=0;
    while(n!=0){
        int c=n%10;
        if(c!=nr){
            pr=pr*c;
            ncf++;
        }
        n=n/10;
    }
    if(ncf==0){
        cout<<0;
    }else{
        cout<<pr;
    }
    return 0;
}
