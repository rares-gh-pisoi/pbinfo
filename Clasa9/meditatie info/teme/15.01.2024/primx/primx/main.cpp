#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int difmin=INT_MAX;
    int nrmin=INT_MAX;
    for(int i=1;i<=n;i++){
        int nr;
        cin>>nr;
        int prim=1;
        for(int d=2;d*d<=nr;d++){
            if(nr%d==0){
                prim=0;
                break;
            }
        }
        if(prim==1){
            int dif=x-nr;
            if(dif<0){
                dif=dif*(-1);
            }
            if(dif<difmin){
                difmin=dif;
                nrmin=nr;
            }else if(dif==difmin){
                if(nr<nrmin){
                    nrmin=nr;
                }
            }
        }

    }
    cout<<nrmin;
    return 0;
}
