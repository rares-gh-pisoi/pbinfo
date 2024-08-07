#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("paritar.in");
ofstream fout("paritar.out");
int v[500001]
int main()
{
    int n;
    cin>>n;
    int paritar=1;
    int maxpar=INT_MIN;
    int maximp=INT_MIN;
    int minpar=INT_MAX;
    int minimp=INT_MAX;
    for(int i=1;i<=2*n;i++){
        cin>>v[i];
        if(i<=n){
            if(v[i]%2==0){
                if(v[i]>maxpar){
                    maxpar=v[i];
                }
            }else{
                if(v[i]>maximp){
                    maximp=v[i];
                }
            }

        }
        if(i>n){
            if(v[i]%2==0){
                if(v[i]<minpar){
                    minpar=v[i];
                }
            }else{
                if(v[i]>maximp){
                    minimp=v[i];
                }
            }

        }

    }
    for(int i=1;i<=n;i)
    return 0;
}
