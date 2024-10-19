#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("oglindiri.in");
ofstream fout("oglindiri.out");
int v[101];
int main()
{
    int n,m,x,y;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    fin>>m;
    for(int i=1;i<=m;i++){
        fin>>x>>y;
        while(x<y){
            swap(v[x],v[y]);
            x++;
            y--;
        }
    }
    for(int i=1;i<=n;i++){
        fout<<v[i]<<" ";
    }
    return 0;
}
