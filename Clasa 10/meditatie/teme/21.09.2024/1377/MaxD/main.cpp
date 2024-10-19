#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maxd.in");
ofstream fout("maxd.out");
int main()
{
    int n,m,nrc,cnt;
    fin>>n>>m;
    cnt=0;
    int divmax=0;
    for(int i=n;i<=m;i++){
        int c=i;
        int pr=1;
        for(int d=2;d*d<=c;d++){
            if(c%d==0){
                int nrd=0;
                while(c%d==0){
                    nrd++;
                    c/=d;
                }
                pr=pr*(nrd+1);
            }
        }
        if(c!=1){
            pr*=2;
        }
        if(pr>divmax){
            nrc=i;
            divmax=pr;
            cnt=1;
        }else if(pr==divmax){
            cnt++;
        }
    }
    fout<<nrc<<" "<<divmax<<" "<<cnt;
    return 0;
}
