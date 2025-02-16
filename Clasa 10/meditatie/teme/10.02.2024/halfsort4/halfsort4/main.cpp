#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("halfsort4.in");
ofstream fout("halfsort4.out");
int v[1001];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]<0){
            for(int j=i+1;j<=n;j++){
                if(v[j]<0 && v[i]>v[j]){
                    swap(v[i],v[j]);
                }
            }
        }else{
            for(int j=i+1;j<=n;j++){
                if(v[j]>=0 && v[i]<v[j]){
                    swap(v[i],v[j]);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        fout<<v[i]<<" ";
    }
    return 0;
}
