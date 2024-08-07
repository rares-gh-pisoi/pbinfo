#include <iostream>

using namespace std;

int main()
{
    int n,cnt,prim;
    cin>>n;
    while(n!=0){
        cnt=0;
        for(int d=2;d<=n/2;d++){
            if(n%d==0){
                prim=1;
                for(int j=2;j<=d/2;j++){
                    if(d%j==0){
                        prim=0;
                        break;
                    }
                }
                if(prim==1)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
        cin>>n;
    }
    return 0;
}
