#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int c;
    int cmin=INT_MAX;
    int dif=0;
    int difmin=INT_MAX;
    for(int i=1;i<=n;i++){
        cin>>c;
        int ok=1;
        for(int d=2;d*d<=c;d++){
            if(c%d==0){
                ok=0;
                break;
            }
        }
        if(ok==1){
            if(c<x){
                dif=x-c;
            }else{
                dif=c-x;
            }
            if(dif<difmin){
                cmin=c;
                difmin=dif;
            }else if(dif==difmin){
                if(c<cmin){
                    cmin=c;
                }
            }
        }
    }
    cout<<cmin;
    return 0;
}
