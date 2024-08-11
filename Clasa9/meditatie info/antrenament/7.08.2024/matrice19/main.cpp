#include <iostream>
#include <climits>
using namespace std;
int a[51][51];
int main()
{
    int n,N=INT_MIN,E=INT_MIN,S=INT_MIN,V=INT_MIN,aux,in,jn,ie,je,is,js,iv,jv;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>i && j+i<n+1){
                if(a[i][j]>N){
                    N=a[i][j];
                    in = i;
                    jn = j;
                }
            }
            if(j>i && j+i>n+1){
                if(a[i][j]>E){
                    E=a[i][j];
                    ie = i;
                    je = j;
                }
            }
            if(j<i && j+i>n+1){
                if(a[i][j]>S){
                    S=a[i][j];
                    is = i;
                    js = j;
                }
            }
            if(j<i && j+i<n+1){
                if(a[i][j]>V){
                    V=a[i][j];
                    iv = i;
                    jv = j;
                }
            }
        }
    }

    aux = a[in][jn];
    a[in][jn] = a[iv][jv];
    a[iv][jv] = a[is][js];
    a[is][js] = a[ie][je];
    a[ie][je] = aux;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
