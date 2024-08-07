#include <iostream>
#include <climits>
using namespace std;
int a[51][51]
int main()
{
    int n,max1=INT_MIN,max2=INT_MIN,max3=INT_MIN,max4=INT_MIN;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>i && j+i<n+1){
                if(a[i][j]>max1){
                    max1=a[i][j];
                }
            }
            if(j>i && j+i>n+1){
                if(a[i][j]>max2){
                    max2=a[i][j];
                }
            }
            if(j<i && j+i>n+1){
                if(a[i][j]>max3){
                    max3=a[i][j];
                }
            }
            if(j<i && j+i<n+1){
                if(a[i][j]>max4){
                    max4=a[i][j];
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>i && j+i<n+1){
                if(a[i][j]==max1){
                    int aux=a[i][j];
                    a[i][j]=max4;
                }
            }
        }
    }
    return 0;
}
