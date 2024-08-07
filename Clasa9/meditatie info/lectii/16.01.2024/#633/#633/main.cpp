#include <iostream>

using namespace std;
int v[1000],n,i;
int main()
{
    cin>>n;
    int nrp=0;
    int nri=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            nrp++;
        }else{
            nri++;
        }
    }
    int dif=nrp-nri;
    if(dif<0){
        dif=dif*(-1);
    }
    cout<<dif;
    return 0;
}
