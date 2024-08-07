#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int Maxput=INT_MIN;
    int Maxd=INT_MIN;
    int d=2;
    while(n>1) {
        int p;
        if(n%d==0) {
            p=0;
            while(n%d==0) {
                p++;
                n/=d;
            }


                if(p>Maxput) {
                    Maxput=p;
                    Maxd=d;
                }
                d++;
                if(n>1 && d*d>n) {
                    d=n;
                }
            }



        }

    cout<<Maxd<<" "<<Maxput;
    return 0;
}
