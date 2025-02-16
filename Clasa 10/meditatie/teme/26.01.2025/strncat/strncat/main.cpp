#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char cuv[1000001];
    cin>>cuv;
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x%2==0){
            strncat(cuv,cuv,x);
        }else{
            char t[1001]={};
            int k=0;
            for(int j=x-1;j>=0;j--){
                t[k]=cuv[j];
                k++;
            }
            strncat(cuv,t,x);
        }
    }
    cout<<cuv;
    return 0;
}
