#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("datapal.in");
ofstream fout("datapal.out");
char cif[10];
int sec[101];
int main()
{
    int n;
    fin>>n;
    int apmax=-1;
    int cnt=0;
    for(int i=1;i<=n;i++){
        fin>>cif;
        int pal=1;
        int st=0,dr=7;
        while(st<dr){
            if(cif[st]!=cif[dr]){
                pal=0;
                break;
            }
            st++;
            dr--;
        }
        if(pal==1){
            cnt++;
            int veac=(cif[4]-'0')*10+cif[5]-'0'+1;
            sec[veac]++;
            if(sec[veac]>apmax){
                apmax=sec[veac];
            }
        }
    }
    fout<<cnt<<"\n";
    for(int i=1;i<=100;i++){
        if(sec[i]==apmax){
            fout<<i<<" ";
        }
    }
    return 0;
}
