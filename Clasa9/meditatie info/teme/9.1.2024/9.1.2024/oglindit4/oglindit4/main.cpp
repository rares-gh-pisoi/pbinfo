#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        int cx=x;
        int ogl=0;
        while(x!=0){
            int c=x%10;
            ogl=ogl*10+c;
            x/=10;
        }
        int cmmdc;
        while(ogl!=0){
            int r=cx%ogl;
            cx=ogl;
            ogl=r;
        }
        cmmdc=cx;
        if(cmmdc==1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
