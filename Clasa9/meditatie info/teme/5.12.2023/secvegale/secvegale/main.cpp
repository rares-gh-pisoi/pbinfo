#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int ca,c;
    cin>>ca;

    int lg=1;
    int lgmax=1;

    int st=1;
    int dr=1;

    for(int i=2;i<=n;i++){
        cin>>c;

        if(c==ca){
            lg++;
        }else{
            lg=1;
        }

        if(lg>=lgmax){
            lgmax=lg;
            dr=i;
            st=dr-lgmax+1;
        }

        ca=c;
    }
    cout<<st<<" "<<dr;
    return 0;
}
