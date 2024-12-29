#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nrlipsa.in");
ofstream fout("nrlipsa.out");
int v[1001];
int main()
{
    int n;
    while(fin>>n){
        if(n>99 && n<1000){
            v[n]=1;
        }
    }
    int nr1=0;
    int nr2=0;
    for(int i=999;i>=100;i--){
        if(v[i]==0 && nr1==0){
            nr1=i;
        }else{
            if(v[i]==0 && nr1!=0){
                nr2=i;
                break;
            }
        }

    }
    if(nr2==0){
        fout<<"NU";
    }else
        fout<<nr1<<" "<<nr2;
    return 0;
}
