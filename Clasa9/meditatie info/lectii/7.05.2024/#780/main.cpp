#include <iostream>

using namespace std;
int a[21][21];
int main()
{
    int n;
    cin>>n;
    int s1=0;
    int s2=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(j<i){
                s1+=a[i][j];
            }else if(j>i){
                s2+=a[i][j];
            }
        }
    }
    while(s2!=0){
        int r=s1%s2;
        s1=s2;
        s2=r;
    }
    int cmmdc=s1;
    cout<<cmmdc;

    return 0;
}
