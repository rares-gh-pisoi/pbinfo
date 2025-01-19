#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream fin("doarvocale.in");
ofstream fout("doarvocale.out");
char c[31];
int nuvoc(char *temp){
    for(int i=0;temp[i]!='\0';i++){
        if(strchr("aeiou",temp[i])==NULL)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    fin>>n;
    fin.get();
    int cnt=0;
    for(int i=1;i<=n;i++){
        fin.getline(c,31);
        if(nuvoc(c)==1)
            cnt++;
    }
    fout<<cnt;
    return 0;
}
