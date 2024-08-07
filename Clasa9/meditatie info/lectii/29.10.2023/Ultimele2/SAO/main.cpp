#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nm;
    cin>>nm;
    int a,s;
   int pmin=INT_MAX;
    int suma1=0;
    int p,r;
    int suma2=0;
    for (int i=1; i<=nm; i++) {
        cin>>a>>s;
        suma1=suma1+a;
        suma2=suma2+s;
    }
    int oferte;
    cin>>oferte;
    for (int j=1;j<=oferte;j++){
        cin>>a>>s>>p;
        if (a-suma1>=0 && s-suma2>=0){
            if (p<pmin){
                pmin=p;
            }
        }
    }
    if (pmin!=INT_MAX){
        cout<<pmin;

    }else
     cout<<-1;
    return 0;
}
