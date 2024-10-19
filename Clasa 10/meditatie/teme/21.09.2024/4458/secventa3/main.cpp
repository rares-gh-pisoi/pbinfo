#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secventa3.in");
ofstream fout("secventa3.out");
int main()
{
    int n,lg,lgmax,st,dr,x,y;
    cin>>n;
    lg=1;
    lgmax=1;
    cin>>x;
    for(int i=2;i<=n;i++){
        cin>>y;
        if(x%2!=y%2){
            lg++;
        }else{
            lg=1;
        }
        if(lg>=lgmax){
            lgmax=lg;
            dr=i;
        }
        x=y;
    }
    st=dr-lgmax+1;
    cout<<st<<" "<<dr;
    return 0;
}
