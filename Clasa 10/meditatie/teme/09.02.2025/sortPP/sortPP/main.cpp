#include <iostream>

using namespace std;
int v[1001];
int pp(int n){
    int pr=1;
    if(n<2){
        return 1;
    }else{
        for(int d=2;d*d<=n;d++){
            if(n%d==0){
                int exp=0;
                while(n%d==0){
                    exp++;
                    n/=d;
                }
                pr=pr*(exp+1);
            }
        }
        if(n!=1){
            pr*=2;
        }
        if(pr%2==1){
            return 1;
        }else{
            return 0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(pp(v[i])==1){
            for(int j=i+1;j<=n;j++){
                if(pp(v[j])==1 && v[i]>v[j])
                    swap(v[i],v[j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
