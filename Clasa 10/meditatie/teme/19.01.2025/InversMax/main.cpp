#include <iostream>

using namespace std;
char c[256];
int main()
{
    cin.getline(c,256);
    int lmax=-1;
    /// determin lungimea maxima a unui cuvant
    for(int i=0;c[i]!='\0';i++){
        if(c[i]!=' '){
            int j=i,ok=0;
            while(c[j]!=' ' && c[j]!='\0'){
                if((c[j]>='a' && c[j]<='z') || (c[j]>='A' && c[j]<='Z')){
                    ok=1;
                }
                j++;
            }
            if(ok==1 && j-i>lmax){

                lmax=j-i;

            }
            i=j-1;   ///sar peste cuvantul parcurs de j
        }
    }
    /// inversez cuvintele de lungime maxima
     for(int i=0;c[i]!='\0';i++){
        if(c[i]!=' '){
            int j=i,ok=0;
            while(c[j]!=' ' && c[j]!='\0'){
                if((c[j]>='a' && c[j]<='z') || (c[j]>='A' && c[j]<='Z')){
                    ok=1;
                }
                j++;
            }
            if(ok==1 && j-i==lmax){

                int st=i,dr=j-1;
                while(st<dr){
                    swap(c[st],c[dr]);
                    st++;
                    dr--;
                }
            }
            i=j-1;  /// sar peste cuvantul parcurs de j
        }
    }
    cout<<c;
    return 0;
}
