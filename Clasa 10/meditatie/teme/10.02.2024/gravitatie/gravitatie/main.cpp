#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("gravitatie.in");
ofstream fout("gravitatie.out");
int v[100001];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    sort(v+1,v+n+1);
    int durere=1;
    for(int i=1;i<n;i++){
        if(v[i]!=v[i+1]){
            durere++;
        }
    }
    fout<<durere;
    return 0;
}
