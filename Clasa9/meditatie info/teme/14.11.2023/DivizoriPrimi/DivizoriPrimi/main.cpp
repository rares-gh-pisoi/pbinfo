#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long spf=0;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        int f=2;
        while(k>1){
            if(k%f==0){
                spf+=f;
                break;
            }
            f++;
            if(k>1 && f*f>k){
                f=k;
                spf+=f;
                break;
            }
        }
    }
    cout<<spf;
    return 0;
}
