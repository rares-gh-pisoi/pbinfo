#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
ofstream fout("bac.out");
int ap[1001];
int main()
{
    int x;
    while(fin>>x){
        ap[x]++;
    }
    int api=1;
    for(int i=0;i<=1000;i++){
        if(ap[i]!=0){
            if(ap[i]>i || ap[i]%2 != i%2){
                api=0;
                break;
            }
        }
    }
    if(api==0){
        cout<<"Nu";
    }else{
        cout<<"Da";
    }
    return 0;
}
