#include <iostream>

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
        int aux=a[i][0];
        for(int j=0;j<m-1;j++){
            a[i][j]=a[i][j+1];
        }
        a[i][m-1]=aux;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
