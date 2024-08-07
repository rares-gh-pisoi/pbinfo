#include <iostream>

using namespace std;
int a[101][101];
int v[4];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>j && j+i<n+1){
                v[1]+=a[i][j];
            }
            if(i>j && i+j>n+1){
                v[2]+=a[i][j];
            }
            if(i<j && i+j>n+1){
                v[3]+=a[i][j];
            }
            if(i<j && i+j<n+1){
                v[4]+=a[i][j];
            }
        }
    }
    int srt;
    do{
        srt=1;
        for(int i=1;i<4;i++){
            if(v[i]>v[i+1]){
                srt=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }while(srt==0);
    for(int i=1;i<=4;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
