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
        int x=v[i];
        int scif=0;
        while(x!=0){
            int cf=x%10;
            scif+=cf;
            x/=10;
        }
        cout<<v[i]%scif<<" ";
    }
    return 0;
}
