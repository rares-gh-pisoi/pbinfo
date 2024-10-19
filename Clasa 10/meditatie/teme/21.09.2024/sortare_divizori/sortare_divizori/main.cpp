#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");
struct elem {
    int x;
    int y;
} v[1001];
int main() {
    int n;
    fin>>n;
    for(int i=1; i<=n; i++) {
        fin>>v[i].x;
        int c=v[i].x;
        int p=1;
        for(int d=2; d*d<=c; d++) {
            if(c%d==0) {
                int nrd=0;
                while(c%d==0) {
                    nrd++;
                    c/=d;
                }
                p=p*(nrd+1);
            }
        }
        if(c!=1) {
            p*=2;
        }
        v[i].y=p;
    }
    int srt;
    do {
        srt=1;
        for(int i=1; i<n; i++) {
            if(v[i].y<v[i+1].y) {
                srt=0;
                swap(v[i].y,v[i+1].y);
                swap(v[i].x,v[i+1].x);
            } else if(v[i].y==v[i+1].y && v[i].x>v[i+1].x) {
                srt=0;
                swap(v[i].x,v[i+1].x);
            }
        }
    } while(srt==0);
    for(int i=1; i<=n; i++) {
        fout<<v[i].x<<" ";
    }
    return 0;
}
