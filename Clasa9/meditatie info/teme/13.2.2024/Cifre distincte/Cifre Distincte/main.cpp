#include <iostream>

using namespace std;
int v[100];
int main()
{
    int n;
    cin>>n;
    int dist=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        while(v[i]>10){
            int c1=v[i]%10;
            v[i]/=10;
            int c2=v[i]%10;
            if(c1==c2){
                dist=0;
                break;
            }
        }
        if(dist==0){
            break;
        }
    }
    if(dist==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
