#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream fin("vocmax.in");
ofstream fout("vocmax.out");
char s[251],smax[251];
int main()
{
    int n;
    fin>>n;
    fin.get();
    int vocmax=0;
    for(int i=1;i<=n;i++){
        fin.getline(s,101);
        int voc=0;
        for(int j=0;s[j]!='\0';j++){
            if(strchr("aeiou",s[j])!=NULL){
                voc++;
            }
        }
        if(voc>vocmax){
            vocmax=voc;
            strcpy(smax,s);
        }
    }
    fout<<smax;
    return 0;
}
