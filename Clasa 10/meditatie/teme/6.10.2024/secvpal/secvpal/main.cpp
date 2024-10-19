#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("secvpal.in");
ofstream fout("secvpal.out");
int v[1001];
int main()
{
    int n,x,y,st,dr;
    fin>>n;
    /// citesc vectorul
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    ///
    st=0;
    dr=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(v[i]==v[j]){
                int ok=1;
                for(x=i,y=j;x<y;x++,y--){
                    if(v[x]!=v[y]){
                        ok=0;
                        break;
                    }
                }
                if(ok){
                    if(j-i>dr-st){
                        st=i;
                        dr=j;
                    }
                }
            }
        }
    }
    fout<<st<<" "<<dr;
    return 0;
}
