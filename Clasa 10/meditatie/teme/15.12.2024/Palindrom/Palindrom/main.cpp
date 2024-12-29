#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("palindrom.in");
ofstream fout("palindrom.out");
char ch[256];
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>ch;
        int m=strlen(ch);
        int pal=1;
        for(int j=0;j<m/2;j++){
            if(ch[j]!=ch[m-j-1]){
                pal=0;
                break;
            }
        }
        fout<<pal<<"\n";
    }
    return 0;
}
