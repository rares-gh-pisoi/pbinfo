#include <iostream>

using namespace std;
int a[51][51];
int main()
{
    int n,c;
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        int ogl=0;
        int cop=a[i][c];
        while(cop!=0){
            int cf=cop%10;
            cop/=10;
            ogl=ogl*10+cf;
        }
        if(a[i][c]==ogl){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
