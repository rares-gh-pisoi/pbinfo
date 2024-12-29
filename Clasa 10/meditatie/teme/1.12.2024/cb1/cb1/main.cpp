#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cb.in");
ofstream fout("cb.out");
int v[50001],n;
int cbst(int x){  /// cea mai din stanga  pozitie a lui x
    int st=1,dr=n,poz=0;
    while(st<=dr){
        int mid=(st+dr)/2;
        if(x==v[mid]){
            poz=mid;
            dr=mid-1;
        }else
           if(x<v[mid]){
               dr=mid-1;
        }
        else
            st=mid+1;
    }
    return poz;
}
int cbdr(int c){  /// cea mai din dreapta aparitie a unui numar <=x
    int st=1,dr=n,poz=0;
    while(st<=dr){
        int mid=(st+dr)/2;
        if(v[mid]<=c){  /// e bine ma duc in dreapta
            poz=mid;
            st=mid+1;
        }else{
            dr=mid-1;
        }
    }
    return poz;
}
int main()
{

    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    int m,c,x;
    fin>>m;
    for(int i=1;i<=m;i++){
        fin>>c>>x;
        if(c==1){
            fout<<cbdr(x)<<"\n";
        }else if(c==2){
            fout<<n-cbdr(x)<<"\n";
        }else{
            int p1=cbst(x);
            int p2=cbdr(x);
            if(p1!=0){
                fout<<p2-p1+1<<"\n";
            }else{
                fout<<"0\n";
            }
        }
    }
    return 0;
}
