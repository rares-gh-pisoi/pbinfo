#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere7.in");
ofstream fout("numere7.out");
int ap[10];
int main()
{
    int a,b;
    fin>>a>>b;
    while(a!=0){
        int c=a%10;
        ap[c]++;
        a/=10;
    }
    while(b!=0){
        int c=b%10;
        ap[c]++;
        b/=10;
    }
    for(int i=1;i<=9;i++){
        if(ap[i]){
            fout<<i;
            ap[i]--;
            break;
        }
    }
    for(int i=0;i<=9;i++){
        while(ap[i]){
            fout<<i;
            ap[i]--;
        }
    }
    return 0;
}
