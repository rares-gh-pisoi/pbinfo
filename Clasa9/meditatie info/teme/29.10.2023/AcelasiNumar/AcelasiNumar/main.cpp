#include <iostream>

using namespace std;

int main()
{
    int n,k,nk,nf;
    cin>>n;
    cin>>nk;
    nf=n;
    for (int i=1;i<=nk;i++){
        cin>>k;
        nf+=k;
    }
    if (nf==n)
        cout<<"DA";
    else
        cout<<"NU";


    return 0;
}
