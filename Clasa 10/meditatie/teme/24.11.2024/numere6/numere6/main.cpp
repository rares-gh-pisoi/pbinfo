#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere6.in");
ofstream fout("numere6.out");
int ap[10];
int main()
{
    int a,b;
    fin>>a>>b;
    while(a!=0){
        ap[a%10]++;
        a/=10;
    }
    while(b!=0){
        ap[b%10]++;
        b/=10;
    }
    for(int i=9;i>=0;i--){
        while(ap[i]){
            fout<<i;
            ap[i]--;
        }
    }
    return 0;
}
