#include <iostream>

using namespace std;
int v[100][100];
int ap[10001];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]<10001){
                ap[v[i][j]]++;
            }
        }
    }
    int s=0;
    for(int i=0;i<10001;i++){
        if(ap[i]!=0 && i%2==0){
            s+=i;
        }
    }
    cout<<s;
    return 0;
}
