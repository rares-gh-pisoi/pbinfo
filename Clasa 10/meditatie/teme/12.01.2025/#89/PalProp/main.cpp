#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("palindrom.in");
ofstream fout("palindrom.out");
char s[201];
int palindrom(char *c){
    for(int i=0,j=strlen(c)-1;i<j;i++,j--){
        if(c[i]!=c[j])
            return 0;
    }
    return 1;
}

int palindromP(char *c){
    char t[251];
    strcpy(t,c);
    for(char *g=c+strlen(c)-1;g>=c;g--){
        if(*g==' '){
            strcpy(t,g+1);
            strcpy(g,t);
        }
    }
    return palindrom(c);
}
int main()
{
    int n;
    fin>>n;
    fin.get();
    for(int i=1;i<=n;i++){
        fin.getline(s,201);
        fout<<palindromP(s)<<"\n";
    }
    return 0;
}
