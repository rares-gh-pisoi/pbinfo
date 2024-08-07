#include <iostream>

using namespace std;
int v[200];
int main()
{
    int n,k;
    cin>>k>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
        // Calculam cei doi multiplii ai lui k
        int c1=v[i]/k;
        int c2=c1+1;
        int m1=c1*k;
        int m2=c2*k;

        // Calculam care multiplu este mai aproape
        int dif1=v[i]-m1;
        int dif2=m2-v[i];
        if(dif1<=dif2){
            v[i]=m1;
        }else{
            v[i]=m2;
        }
    }
    for(int i=n-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}
