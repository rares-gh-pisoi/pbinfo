#include <iostream>

using namespace std;
int a[101][101];
int main() {
    int n,m,ani,vec,serd,erd;
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>a[i][j];
        }
    }
    ani = 0;
    for(;;) {
        serd=0;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(a[i][j]==1) {
                    vec=0;
                    if(a[i-1][j]==0 && i-1>=1) {
                        vec++;
                    }
                    if(a[i+1][j]==0 && i+1<=n) {
                        vec++;
                    }
                    if(a[i][j-1]==0 && j-1>=1) {
                        vec++;
                    }
                    if(a[i][j+1]==0 && j+1<=m) {
                        vec++;
                    }
                    if(vec>=2) {
                        a[i][j]=2;
                    }
                }
            }
        }
        serd = 0;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(a[i][j]==2) {
                    a[i][j]=0;
                    serd++;
                }
            }
        }

        if(serd!=0)
            ani++;
        else
            break;

    }

    erd=1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(a[i][j]==1) {
                erd=0;
                break;
            }
        }
    }
    if(erd==0)
        cout<<"-1";
    else
        cout<<ani;

    return 0;
}
