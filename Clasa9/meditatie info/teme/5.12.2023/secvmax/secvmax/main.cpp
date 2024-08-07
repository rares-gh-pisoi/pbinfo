#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secvmax.in");
ofstream fout("secvmax.out");
int main()
{
    int n,nr;
    fin>>n;

    // lungimea si lungimea maxima
    int lg,lgmax;
    lg=0;
    lgmax=0;

    // suma si suma maxima
    int s,smax;
    s=0;
    smax=0;

    // capetele din stanga si dreapta
    int st,dr;
    st=1;
    dr=1;

    // se citesc elementele sirului
    for(int i=1;i<=n;i++){
        fin>>nr;

        // daca nr este par, lungimea creste cu 1 si suma creste cu nr curent
        if(nr%2==0){
            lg++;
            s+=nr;
        }else{

            // altfel lungimea devine 0 si la fel si suma
            lg=0;
            s=0;
        }

        // daca intalnim un sir cu lungime mai mare, se retine lungimea sa si suma elementelor sale si capetele acelui sir
        if(lg>lgmax){
            lgmax=lg;
            smax=s;
            dr=i;
            st=dr-lgmax+1;

        }else if(lg==lgmax){
            // lungimea curenta=lungimea maxima
            if(s>smax){
                smax=s;
                dr=i;
                st=dr-lgmax+1;
            }
        }
    }
    fout<<st<<" "<<dr;

    return 0;
}
