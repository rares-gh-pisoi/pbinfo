#include <iostream>

using namespace std;
int v[200];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int nrd=0;
        for(int d=1;d*d<=v[i];d++){
            if(v[i]%d==0){
                if(d!=v[i]/d){
                    nrd+=2;
                }else{
                    nrd++;
                }
            }
        }
        for(int j=n-1;j>i-1;j--){
            v[j+1]=v[j];
        }
        v[i]=nrd;
        n++;
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
