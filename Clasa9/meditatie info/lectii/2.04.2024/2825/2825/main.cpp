#include <iostream>

using namespace std;
int v[100][100];
int ap[100];
int main()
{
    int n,m,x;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(i==0 || i==n-1 || j==0 || j==m-1){
                if(v[i][j]<101 && v[i][j]>2){
                    ap[v[i][j]]=1;
                }

            }
        }
    }
    cin>>x;
    if(ap[x]!=0){
        cout<<"DA";
    }else{
        cout<<"NU";
    }
    return 0;
}
