#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("marmote.in");
ofstream fout("marmote.out");
int a[1001][1001];
int main() {
    int n,m,k,l;
    fin>>n>>m>>k>>l;
    for(int s=1; s<=k; s++) {
        int i,j;
        fin>>i>>j;
        a[i][j]=1;
        int val=1;
        int df=j-l;
        if(df<l) {
            for(int f=1; f<j+l; f++) {
                if(a[i][f]==1 && (f!=j)) {
                    val=0;
                    break;
                } else {
                    a[i][f]=1;
                }
                int sum=i+f;
                int df2=sum-(i+j);
                if(df2<0){
                    df2*=-1;
                }
                if(df2<l) {
                    int df3=i-l;
                    if(df3<0) {
                        for(int h=1; h<=i+l; h++) {
                            if(a[h][f]!=1)
                                a[h][f]=1;
                            else if(a[h][f]==1 && (h!=i)) {
                                val=0;
                                break;
                            }

                        }

                    } else {
                        for(int h=i-l; h<=i+l; h++) {
                            if(a[h][f]!=1)
                                a[h][f]=1;
                            else if(a[h][f]==1 && (h!=i)) {
                                val=0;
                                break;
                            }
                        }
                    }
                }
            }
        } else {
            for(int f=j-l; f<=j+l; f++) {
                if(a[i][f]==1 && (f!=j)) {
                    val=0;
                    break;
                } else {
                    a[i][f]=1;
                }
                int sum=i+f;
                int df2=sum-(i+j);
                if(df2<0){
                    df2*=-1;
                }
                if(df2<l) {
                    int df3=i-l;
                    if(df3<0) {
                        for(int h=1; h<=i+l; h++) {
                            if(a[h][f]!=1)
                                a[h][f]=1;
                            else if(a[h][f]==1 && (h!=i)) {
                                val=0;
                                break;
                            }

                        }

                    } else {
                        for(int h=i-l; h<=i+l; h++) {
                            if(a[h][f]!=1)
                                a[h][f]=1;
                            else if(a[h][f]==1 && (h!=i)) {
                                val=0;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(val==1) {
            f
            out<<s<<endl;
        }

    }
    return 0;
}
