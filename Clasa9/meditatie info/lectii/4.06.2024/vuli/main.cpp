#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("vuli.in");
ofstream fout("vuli.out");
int a[45][45];
int main() {
    int k;
    fin>>k;
    for(int i=0; i<k+1; i++) {
        a[i][0]=1;
    }
    for(int i=1; i<=k; i++) {
        a[i][i]=1;
    }
    for(int i=1; i<=k; i++) {
        for(int j=1; j<i; j++) {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }

    for(int i=0; i<=k/2; i++) {
        int s=0;
        int cnr=a[k][i];
        while(cnr!=0) {
            int c=cnr%10;
            cnr/=10;
            s=s+c;
        }

        int prim=1;
        for(int d=2; d*d<=s; d++)
            if(s%d==0) {
                prim=0;
                break;
            }
        if(prim==1)
            fout<<a[k][i]<<" ";


    }
    return 0;
}
