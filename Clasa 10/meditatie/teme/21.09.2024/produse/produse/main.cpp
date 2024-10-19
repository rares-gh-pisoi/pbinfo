#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("produse.in");
ofstream fout("produse.out");
struct elem {
    int val;
    int cf;
} v[10001];
int f[10];
int main() {
    int c,n;
    fin>>c>>n;
    for(int i=1; i<=n; i++) {
        fin>>v[i].val;
    }
    switch(c) {
    case 1:
        int sd,se;
        sd=0;
        se=0;
        for(int i=1; i<=n; i++) {
            int x=v[i].val;
            while(x>99) {
                x/=10;
            }
            if(x%2==0) {
                sd++;
            } else {
                se++;
            }
        }
        fout<<sd<<" "<<se;
        break;
    case 2:
        for(int i=1; i<=n; i++) {
            int c=v[i].val;
            while(c>9){
                c/=10;
            }
            v[i].cf=c;
            f[c]=1;
        }
        int srt;
        do{
            srt=1;
            for(int i=1;i<n;i++){
                if(v[i].cf>v[i+1].cf){
                    srt=0;
                    swap(v[i].cf,v[i+1].cf);
                    swap(v[i].val,v[i+1].val);
                }else if(v[i].cf==v[i+1].cf && v[i].val>v[i+1].val){
                    srt=0;
                    swap(v[i].val,v[i+1].val);
                }
            }
        }while(srt==0);
        for(int i=1;i<=9;i++){
            if(f[i]==1){
                fout<<i<<" ";
                for(int j=1;j<=n;j++){
                    if(v[j].cf==i)
                        fout<<v[j].val<<" ";
                }
                fout<<"\n";
            }
        }
        break;
    }
    return 0;
}
