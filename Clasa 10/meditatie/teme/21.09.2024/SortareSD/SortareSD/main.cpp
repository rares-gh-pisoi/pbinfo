#include <iostream>

using namespace std;

struct elem {
    int x;
    int y;
} v[1001];
int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>v[i].x;
        int c=v[i].x;
        int s=0;
        for(int d=1; d*d<=c; d++) {
            if(c%d==0) {
                if(d!=c/d) {
                    s=s+d+(c/d);
                } else {
                    s+=d;
                }
            }
        }
        v[i].y=s;
    }
    int srt;
    do {
        srt=1;
        for(int i=1; i<n; i++) {
            if(v[i].y>v[i+1].y) {
                srt=0;
                swap(v[i].y,v[i+1].y);
                swap(v[i].x,v[i+1].x);
            } else if(v[i].y==v[i+1].y && v[i].x>v[i+1].x) {
                srt=0;
                swap(v[i].x,v[i+1].x);
            }
        }
    }while(srt==0);
    for(int i=1; i<=n; i++) {
        cout<<v[i].x<<" ";
    }
    return 0;
}
