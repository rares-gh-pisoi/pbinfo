#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("max.out");
int main()
{
    int n;
    cin>>n;
    int cn=n;
    int maxc=-1;
    while(cn!=0){
        int c=cn%10;
        if(c>maxc){
            maxc=c;
        }
        cn/=10;
    }
    int p=1;
    int m=0;
    while(n!=0){
        int uc=n%10;
        if(maxc!=uc){
            m=m+uc*p;
            p*=10;
        }
        n/=10;
    }
    fout<<m;
    return 0;
}
