#include <iostream>

using namespace std;
int v[100][100];
int main()
{
    int m,n;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        int ok=1;
        for(int j=0;j<m-1;j++){
            if(v[i][j]!=v[i][j+1]){
                ok=0;
                break;
            }
        }
        if(ok==1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
