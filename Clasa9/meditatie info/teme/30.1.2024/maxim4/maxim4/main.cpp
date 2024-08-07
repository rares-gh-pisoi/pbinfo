#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("maxim4.in");
ofstream fout("maxim4.out");
int v[100];
int main()
{
    int n;
    fin>>n;
    int maxim=INT_MIN;
    int ap=0;
    for(int i=0;i<n;i++){
        fin>>v[i];
        if(v[i]>maxim){
            maxim=v[i];
            ap=1;
        }else if(v[i]==maxim){
            ap++;
        }
    }
    fout<<maxim<<" "<<ap;
    return 0;
}
