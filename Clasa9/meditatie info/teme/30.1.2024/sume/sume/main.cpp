#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sume.in");
ofstream fout("sume.out");
int v[100];
int main()
{
    int n;
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>v[i];
    }
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=0;j<n-i;j++){
            s+=v[j];
        }
        fout<<s<<endl;
    }
    return 0;
}
