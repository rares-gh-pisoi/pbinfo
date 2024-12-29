#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nrlipsa1.in");
ofstream fout("nrlipsa1.out");
int v[101];
int main()
{
    int n;
    while(fin>>n){
        if(n>9 && n<100)
           v[n]=1;
    }
    int nr1=0;
    int nr2=0;
    for(int i=10;i<100;i+=2){
        if(v[i]==0){
            nr1=i;
            break;
        }
    }
    for(int i=98;i>=10;i-=2){
        if(v[i]==0 && i!=nr1){
            nr2=i;
            break;
        }
    }
    if(nr2==0){
        fout<<"nu exista";
    }else{
        fout<<nr1<<" "<<nr2;
    }
    return 0;
}
