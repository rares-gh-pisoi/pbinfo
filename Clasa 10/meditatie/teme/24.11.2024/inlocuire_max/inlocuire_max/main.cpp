#include <iostream>
#include <fstream>
using namespace std;
int v[201];
int ap[10];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        int cv=v[i];
        while(cv!=0){
            int c=cv%10;
            ap[c]++;
            cv/=10;
        }
        int s=0;
        for(int j=9;j>=0;j--){
            while(ap[j]){
                s=s*10+j;
                ap[j]--;
            }
        }
        v[i]=s;
        for(int i=0;i<=9;i++){
            ap[i]=0;
        }
    }
    for(int i=n;i>=1;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}
