#include <iostream>

using namespace std;
int a[51][51];
int main() {
    int m,n;
    cin>>m>>n;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++) {
            if(i<=j && j<10)
                a[i][j]=j*10+i;
            else if(i>j && i<10)
                a[i][j]=i*10+j;
            if(i>9 && i>=j)
                a[i][j]=j*100+i;
            else if(j>9 && j>=i)
                a[i][j]=i*100+j;

        }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
