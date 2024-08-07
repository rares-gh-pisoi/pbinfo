#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("betasah.in");
ofstream fout("betasah.out");

int di[] = {0, 0,1,-1,-1,1,-1, 1};
int dj[] = {1,-1,0, 0,-1,1, 1,-1};

int a[1001][1001];
int main() {
    int n,d,k,i,j, ii, jj, sol=0, pasi, pasj;
    fin>>n>>d>>k;
    for(int s=1; s<=d; s++) {
        fin>>i>>j;
        a[i][j]=1;
    }
    for(int s=1; s<=k; s++) {
        fin>>i>>j;
        a[i][j]=2;
    }
    int sam=INT_MIN;
    int sap=0;
    for(int i=1; i<=n; i++) {
        int sal=0;
        for(int j=1; j<=i; j++) {
            if(a[i][j]!=2) {
                sal++;
            }
        }
        if(sal>sam) {
            sam=sal;
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if (a[i][j] == 1) {
                for (k = 0; k <= 7; k++){
                    pasi = di[k];
                    pasj = dj[k];
                    for (ii=i+pasi,jj=j+pasj;  ii >= 1 && ii <= n && jj >= 1 && jj <=n && ii>=jj ;ii+=pasi,jj+=pasj)
                        if (a[ii][jj] != 1 && a[ii][jj] != 2)
                            a[ii][jj] = 3;
                        else
                            break;
                }
            }
        }
    }

    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            if (a[i][j] == 3)
                sol++;
            ///fout<<a[i][j]<<" ";
        }
        ///fout<<"\n";
    }

    fout<<sam<<"\n"<<sol<<"\n";

    return 0;
}
