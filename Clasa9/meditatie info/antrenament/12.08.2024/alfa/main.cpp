#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("alfa.in");
ofstream fout("alfa.out");
int v[1001];
int main()
{
    int n,x,p1,p2;
    fin>>n>>x;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    p1=1;
    for(int i=2;i<n;i++){
        if(v[i]==x){
            p2=i;
            int srt;
            sort(v+p1+1,v+p2-1);
            p1=i;
        }
    }
    for(int i=1;i<=n;i++){
        fout<<v[i]<<" ";
    }
    return 0;
}
