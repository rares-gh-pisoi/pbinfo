#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("sirmaxim.in");
ofstream fout("sirmaxim.out");
int main()
{
    int n;
    fin>>n;
    int maxj=INT_MIN;
    int ap=0;
    for (int i=1;i<=n;i++){
        int k;
        fin>>k;
        if(i<=n/2){
            if(k>maxj){
                maxj=k;
            }
        }else{
            if(k==maxj){
                ap++;
            }
        }
    }
    fout<<ap;
    return 0;
}
