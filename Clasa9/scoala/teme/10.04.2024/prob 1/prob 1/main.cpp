#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int pmax=-1;
    int x=0;
    for(int i=a;i<=b;i++){
        int nr=i;
        int pr=1;
        for(int d=2;d<=nr/2;d++){
            if(nr%d==0 && d%2==1){
                pr*=d;
            }
        }
        if(pr!=1){
            if(pr>pmax){
                pmax=pr;
                x=nr;
            }
        }
    }
    if(x==0){
        cout<<"0";
    }else{
        cout<<pmax;
    }
    return 0;
}
