#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char v[256];
    cin.getline(v,256);
    int st,dr=0,lg=0;
    int l=strlen(v);
    for(int i=0;i<l;i++){
        if((v[i]>='a' && v[i]<='z') || (v[i]>='A' && v[i]<='Z')){
            int j=i;
            lg=0;
            while(v[j]!=' ' && v[j]!='\0'){
                j++;
                lg++;
            }
//            cout<<"j: " <<j << endl;
            dr=j-1;
            st=dr-lg+1;

            char cuv[256] = {};
//            cout << st << " -- " << lg << endl;
            strncpy(cuv,v+st,lg);
//            cout<<"cuv " <<cuv << endl;
            cout<<cuv;
            cout<<" ";
            char inv[256] = {};
            for(int k=dr;k>=st;k--){
                char ch[2] = {};
                ch[0] = v[k];
                strcat(inv, ch);
//                cout<<v[k];
            }

            cout<<inv<<" ";
            i=j;
//            cout<<"j2: " <<j << endl;
        }
    }
    return 0;
}
