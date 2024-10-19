#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("subnumar.in");
ofstream fout("subnumar.out");
int ap[101];
int main()
{
    int x;
    while(fin>>x){
        while(x>9){
            int nrc=x%100;
            x/=10;
            ap[nrc]++;
        }
    }
    int apmax=INT_MIN;
    for(int i=10;i<=99;i++){
        if(ap[i]!=0){
            if(ap[i]>apmax){
                apmax=ap[i];
            }
        }
    }
    for(int i=99;i>=10;i--){
        if(ap[i]==apmax){
            fout<<i<<" ";
        }
    }
    return 0;
}
