#include <iostream>

using namespace std;
int a[105][105];
int main()
{
    int l,c;
    cin>>l>>c;
    for(int j=0;j<=c+1;j++){
        a[0][j]=11;
        a[l+1][j]=11;
    }
    for(int i=0;i<=l+1;i++){
        a[i][0]=11;
        a[i][c+1]=11;
    }
    int s=0;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=l;i++){
        for(int j=1;j<=c;j++){
            int vmin=11;
            if(a[i-1][j]<vmin){
                vmin=a[i-1][j];
            }
            if(a[i][j-1]<vmin){
                vmin=a[i][j-1];
            }
            if(a[i][j+1]<vmin){
                vmin=a[i][j+1];
            }
            if(a[i+1][j]<vmin){
                vmin=a[i+1][j];
            }
            if(a[i][j]<vmin){
                s=s+(vmin-a[i][j]);
            }

        }
    }
    cout<<s;
    return 0;
}
