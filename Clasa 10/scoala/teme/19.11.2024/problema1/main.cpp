#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("problema1.in");
int main()
{
    int n,x,y;
    fin>>n;
    for(int i=2;i<=n;i++){
        fin>>x>>y;
        int cx=x,cy=y;
        while(cy!=0){
            int r=cx%cy;
            cx=cy;
            cy=r;
        }
        if(cx==1){
            cout<<x<<" "<<y<<"\n";
        }
        x=y;
    }
    return 0;
}
