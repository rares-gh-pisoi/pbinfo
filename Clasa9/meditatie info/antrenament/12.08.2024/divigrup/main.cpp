///#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("divigrup.in");
ofstream cout("divigrup.out");
struct elem{
   int val,nrd;
}v[201];
int cmp(elem a,elem b){
  if(a.nrd==b.nrd)
       return a.val<b.val;
  return a.nrd>b.nrd;

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i].val;
       int x=v[i].val;
       int p=1;
       for(int d=2;d*d<=x;d++){
            if(x%d==0){
                int nrd=0;
                while(x%d==0){
                    nrd++;
                    x/=d;
                }
                p=p*(nrd+1);
            }
       }
       if(x!=1){
            p=p*2;
       }
       v[i].nrd=p;
    }
    /*int srt;
    do{
        srt=1;
        for(int i=1;i<n;i++){
            if(d[i]<d[i+1]||d[i]==d[i+1]&&v[i]>v[i+1]){
                srt=0;
                swap(d[i],d[i+1]);
                swap(v[i],v[i+1]);
            }
        }
    }while(srt==0);*/
    sort(v+1,v+n+1,cmp);
    int nrd=1;
    for(int i=2;i<=n;i++){
        if(v[i].nrd!=v[i-1].nrd){
            nrd++;
        }
    }
    cout<<nrd<<"\n";
    nrd=1;
    for(int i=2;i<=n;i++){
        if(v[i].nrd==v[i-1].nrd){
            nrd++;
        }else{
            /// in i-1 se termina un divigrup
            cout<<nrd<<" ";
            int p1=i-nrd;
            for(int j=p1;j<i;j++){
                cout<<v[j].val<<" ";
            }
            cout<<"\n";
           nrd=1; /// cu v[i] incepe un nou divigrup
        }
    }
    cout<<nrd<<" ";
    for(int i=n-nrd+1;i<=n;i++){
        cout<<v[i].val<<" ";
    }
    return 0;
}
