#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("prosir.in");
ofstream fout("prosir.out");
char ch[256];
int main()
{
    fin.getline(ch,256);
    for(int i=0;ch[i]!='.';i++){
        if((ch[i+1]==' ' || ch[i+1]=='.') && ch[i]!=' '){
            fout<<5;
        }else{
            fout<<ch[i];
        }
    }
    fout<<'.';
    return 0;
}
