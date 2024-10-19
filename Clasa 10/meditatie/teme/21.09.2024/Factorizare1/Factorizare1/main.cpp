#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int fmax=INT_MIN;
    int pmax=0;
    int d=2;
    while(n>1){
        int nrd=0;
        while(n%d==0){
            nrd++;
            n/=d;
        }
        if(nrd>pmax){
            pmax=nrd;
            fmax=d;
        }else if(nrd==pmax && d>fmax){
            fmax=d;
        }
        d++;
        if(n>1 && d*d>n){
            d=n;
        }
    }
    cout<<fmax;
    return 0;
}
