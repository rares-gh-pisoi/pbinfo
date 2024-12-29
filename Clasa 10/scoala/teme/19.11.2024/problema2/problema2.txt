#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("problema2.in");
int main()
{
    int x,y;
    fin>>x;
    int cnt=0;
    while(fin>>y){
        int p1=1;
        int p2=1;
        for(int d=2;d*d<=x;d++){
            if(x%d==0){
                int put=0;
                while(x%d==0){
                    put++;
                    x/=d;
                }
                p1=p1*(put+1);
            }
        }
        if(x!=1){
            p1*=2;
        }
        for(int d=2;d*d<=y;d++){
            if(y%d==0){
                int put=0;
                while(y%d==0){
                    put++;
                    y/=d;
                }
                p2=p2*(put+1);
            }
        }
        if(y!=1){
            p2*=2;
        }
        if(p1%2==0 && p2%2==0){
            cnt++;
        }
        x=y;
    }
    cout<<cnt;
    return 0;
}
