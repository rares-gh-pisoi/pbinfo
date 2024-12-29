#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("gcd.in");
ofstream fout("gcd.out");
int x,Max;
int fr1[1000001], fr2[1000001];
int main() {
    int n;
    fin>>n;
    int xmax=1;
    for(int i=1; i<=n; i++) {
        fin>>x;
        fr1[x]=1;
        Max=max(Max,x);
    }
    for(int i=1; i<=n; i++) {
        fin>>x;
        fr2[x]=1;
        Max=max(Max,x);
    }
    for(int i=Max; i>=1; i-- ){/// posibilul divizor comun
            int ok1=0,ok2=0;
        for(int d=i; d<=Max; d+=i){   /// merg pe multiplii lui i si daca gasesc un multiplu care este numar fr1 si un multiplu nr in fr2
            if(fr1[d]==1)
                ok1=1;

            if(fr2[d]==1)
                  ok2=1;
            if(ok1*ok2==1)
            {
                fout<<i;
                return 0;
            }

        }
    }
    return 0;
}
