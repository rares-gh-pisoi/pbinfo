#include <iostream>

using namespace std;
int prim(int n){
    int pr=1;
    if(n<2){
        pr=0;
    }else{
        for(int d=2;d*d<=n;d++){
            if(n%d==0){
                pr=0;
                break;
            }
        }
    }
    return pr;
}
int nr_prim(int x){
    int nrc;
    for(int i=x+1;i<1000000000;i++){
        if(prim(i)==1){
            nrc=i;
            break;
        }
    }
    return nrc;
}
int main()
{
    int n;
    cin>>n;
    cout<<nr_prim(n);
    return 0;
}
