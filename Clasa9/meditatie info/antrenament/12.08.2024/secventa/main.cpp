///#include <iostream>
#include <fstream>
using namespace std;
ifstream cin ("secventa.in");
ofstream cout("secventa.out");
int main()
{
    int n,x,lg,lgmax,s,smax,st,dr,y;
    cin>>n>>x;
    lg=lgmax=1;
    s=smax=x;
    for(int i=2;i<=n;i++){
        cin>>y;
        if(x%2!=y%2){
            lg++;
            s+=y;
        }else{

             if(lg>lgmax){
                 lgmax=lg;
                smax=s;
                 dr=i-1;
        }else if(lg==lgmax && s>=smax){
            smax=s;
            dr=i-1;
        }
           lg=1;
            s=y;
        }
        x=y;
    }


             if(lg>lgmax){
                 lgmax=lg;
                smax=s;
                 dr=n;
        }else if(lg==lgmax && s>=smax){
            smax=s;
            dr=n;
        }
    st=dr-lgmax+1;
    cout<<st<<" "<<dr;
    return 0;
}
