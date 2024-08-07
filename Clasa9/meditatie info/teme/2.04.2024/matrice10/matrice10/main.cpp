#include <iostream>
#include <climits>
using namespace std;
int v[50][50];
int main()
{
    int n,m;
    cin>>n>>m;
    int emin=INT_MAX;
    int fmin=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(j==0){
                if(v[i][j]<emin){
                    emin=v[i][j];
                }
            }
            if(j==m-1){
                if(v[i][j]<fmin){
                    fmin=v[i][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==0 && v[i][j]==emin){
                v[i][j]=fmin;
            }
            if(j==m-1 && v[i][j]==fmin){
                v[i][j]=emin;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
