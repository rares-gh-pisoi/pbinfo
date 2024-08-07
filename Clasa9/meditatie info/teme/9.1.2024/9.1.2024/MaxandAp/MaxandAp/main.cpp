#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int nrmax=INT_MIN;
    int ap=0;
    for(int i=1;i<=n;i++){
        int nr;
        cin>>nr;
        if(nr>nrmax){
            nrmax=nr;
            ap=1;
        }else if(nr==nrmax){
            ap++;
        }
    }
    cout<<nrmax<<" "<<ap;
    return 0;
}
