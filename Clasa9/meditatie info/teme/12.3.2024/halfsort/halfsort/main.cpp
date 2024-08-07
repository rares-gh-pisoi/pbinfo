#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("halfsort.in");
ofstream fout("halfsort.out");
int v[100];
int main()
{
    int n;
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>v[i];
    }
    int ver1,ver2;
    do{
        ver1=1;
        for(int i=0;i<n/2-1;i++){
            if(v[i]>v[i+1]){
                ver1=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }

    }while(ver1==0);

    do{
        ver2=1;
        for(int i=n/2;i<n-1;i++){
            if(v[i]<v[i+1]){
                ver2=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }

    }while(ver2==0);

    for(int i=0;i<n;i++){
        fout<<v[i]<<" ";
    }
    return 0;
}
