#include <iostream>
#include <climits>
using namespace std;
int a[100][100];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int s=0;
        int nmax=INT_MIN;
        for(int j=0;j<m;j++){
            s+=a[i][j];
            if(a[i][j]>nmax){
                nmax=a[i][j];
            }
        }
        s-=nmax;
        cout<<s<<" ";
    }
    return 0;
}
