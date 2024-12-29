#include <iostream>

using namespace std;

int fr1[1000000],fr2[1000000];
int main()
{
    int n,x;
    cin>>n;
    int lgmax=0;
    int stmin=-1;
    int drmin=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(fr1[x]==0)  /// sunt la prima aparitie
            fr1[x]=i;
        fr2[x]=i;
    }
    for(int i=0;i<1000000;i++){
        int lg=fr2[i]-fr1[i]+1;
        if(lg>lgmax){
            lgmax=lg;
            stmin=fr1[i];
            drmin=fr2[i];
        }
    }
    cout<<stmin<<" "<<drmin;
    return 0;
}
