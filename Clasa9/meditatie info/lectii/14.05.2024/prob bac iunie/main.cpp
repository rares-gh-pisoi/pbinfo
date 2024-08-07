#include <iostream>
#include <climits>
using namespace std;
int v[]
int main()
{
    int ns,np;
    cin>>ns>>np;
    for(int i=1;i<=np;i++){
        for(int j=1;j<=ns;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        int vmax=INT_MIN;
        int imax=-1;
        int jmax=-1;
        for(int j=1;j<=n;j++){
            if(a[i][j]>vmax){
                vmax=a[i][j];
                imax=i;
                jmax=j;
            }
        }
        cout<<imax<<":"<<jmax<<" ";
    }
    return 0;
}
