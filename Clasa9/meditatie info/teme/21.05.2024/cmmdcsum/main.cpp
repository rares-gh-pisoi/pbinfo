#include <iostream>

using namespace std;
int a[21][21];
int main()
{
    int n;
    cin>>n;
    int s1=0,s2=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            s1+=a[i][j];
        }
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            s2+=a[i][j];
        }
    }
    int cmmdc;
    while(s2!=0){
        int c=s1%s2;
        s1=s2;
        s2=c;
    }
    cmmdc=s1;
    cout<<s1;
    return 0;
}
