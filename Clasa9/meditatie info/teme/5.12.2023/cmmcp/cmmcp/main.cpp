#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int cpm=-1;
    if(n==0){
        cpm=0;
    }
    while(n>1){
        int cf=n%10;
        if(cf%2==0 && cf>cpm){
            cpm=cf;
        }
        n/=10;
    }
    if(cpm==-1){
        cout<<10;
    }else{
        cout<<cpm;
    }

    return 0;
}
