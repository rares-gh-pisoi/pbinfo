#include <iostream>

using namespace std;
int a[101][101];
int v[5];
int main()
{
    int n,s1,s2,s3,s4,srt;
    cin>>n;
    s1=0;
    s2=0;
    s3=0;
    s4=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>i && j+i<n+1){
                s1+=a[i][j];
                v[1]=s1;
            }
            if(j>i && j+i>n+1){
                s2+=a[i][j];
                v[2]=s2;
            }
            if(j<i && j+i>n+1){
                s3+=a[i][j];
                v[3]=s3;
            }
            if(j<i && j+i<n+1){
                s4+=a[i][j];
                v[4]=s4;
            }
        }
    }
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
