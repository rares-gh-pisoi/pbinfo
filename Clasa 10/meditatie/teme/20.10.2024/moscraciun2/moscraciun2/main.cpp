#include <iostream>
#include <algorithm>
using namespace std;
struct Magazin {
    int pr;
    int c;
};

Magazin v[101];

void sortsir(Magazin v[],int n){
    int ok=0;
    while(ok==0){
        ok=1;
        for(int i=1;i<n;i++){
            if(v[i].pr>v[i+1].pr){
                ok=0;
                Magazin aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }


}
int main()
{
    int n,m;
    cin>>n>>m;
    int k=0;
    for(int i=1;i<=m;i++){
        cin>>v[i].pr>>v[i].c;
        k+=v[i].c;
    }
    //verificam din start daca Mos Craciun poate lua cele n cadouri
    if(n>k){
        cout<<"imposibil\n";
    }else{
        sortsir(v, m);
        int s=0;
        for(int i=1;i<=m;i++){
            if(v[i].c<=n){
                s=s+v[i].pr*v[i].c;
                n-=v[i].c;
            }else{
                s=s+v[i].pr*n;
                break;
            }

            if(n==0)
                break;
        }
        cout<<s;
    }
    return 0;
}
