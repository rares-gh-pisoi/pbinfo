#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
int main()
{
    int x;
    fin>>x;
    int s=0,cnt=0;
    while(fin>>x){
        int ogl=0,cx=x;
        while(cx!=0){
            ogl=ogl*10+cx%10;
            cx/=10;
        }
        if(x==ogl){
            s+=x;
            cnt++;
        }
    }
    if(cnt!=0){
        double ma=s*1.0/cnt;
        cout<<ma;
    }else{
        cout<<"nu exista";
    }
    return 0;
}
