#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long  n,rm,pm,ra,ps,oferte,pret;
    cin>>n;
    long long srm=0;
    long long spm=0;
    int V=INT_MAX;/// v este cel mai mic pret posibil
    for (int i=1;i<=n; i++){
        cin>>rm>>pm;
        srm+=rm;
        spm+=pm;
    }
    cin>>oferte;
    for (int j=1;j<=oferte;j++){
        cin>>ra>>ps>>pret;
        if (ra>spm && ps>srm && pret<V){
            V=pret;
        }
    }
    if (V==INT_MAX){
        cout<<-1;
    }else{
        cout<<V;
    }
    return 0;
}
