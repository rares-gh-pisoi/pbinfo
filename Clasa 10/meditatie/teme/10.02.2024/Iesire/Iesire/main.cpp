#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("iesire.in");
ofstream fout("iesire.out");
int a[101][101],n;
int dirl[]={-1,1,0,0};
int dirc[]={0,0,1,-1};
int iesire(int x, int y) {
    a[x][y] = -1;  // Marcare poziție vizitată

    for (int i = 0; i < 4; i++) {
        int cx = x + dirl[i];
        int cy = y + dirc[i];

        if (cx >= 1 && cx <= n && cy >= 1 && cy <= n && a[cx][cy] == 0) {
            if (cx == 1 || cx == n || cy == 1 || cy == n) {
                return 1;  // Am ajuns la margine
            }
            if (iesire(cx, cy)) {
                return 1;  // Propagare succes
            }
        }
    }

    return 0;  // Nu s-a găsit o cale de ieșire
}
int main()
{
    int k,l,c;
    fin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=1;i<=k;i++){
        fin>>l>>c;
        if(iesire(l,c)==1)
            fout<<"da\n";
        else
            fout<<"nu\n";
    }
    return 0;
}
