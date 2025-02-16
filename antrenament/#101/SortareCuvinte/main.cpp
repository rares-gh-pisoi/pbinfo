#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("sortcuv.in");
ofstream fout("sortcuv.out");
void sortareLexicografica(char* t[130],int n){
    int ok;
    do{
        ok=1;
        for(int i=0;i<n-1;i++){
            cout << i<< " -- " << t[i] << " -- " << t[i + 1] << endl;
            char c1[21] = {};
            strcpy(c1, t[i]);

            char c2[21] = {};
            strcpy(c2, t[i + 1]);

            cout << c1 << " -- " << c2 << endl;
            if(strcmp(c1,c2)>0){
                cout << t[i] << " -- " << t[i + 1] << endl;
                swap(t[i],t[i+1]);

                cout << t[i] << " -- " << t[i + 1] << endl;
                ok=0;
            }
        }
    }while(ok==0);
}
int main()
{
    char v[256];
    char* t[130];
    fin.getline(v,256);

    int st=-1,dr=-1,k=0;
    for(int i=0;v[i]!='\0';i++){
//        cout<<" i: " << i << endl;
        if(v[i]>='a' && v[i]<='z'){
            if(st==-1){
                st=i;
            }
            dr=i;
        }else{
//            cout<<"Indicii de stanga si dreapta sunt: "<<st<<" "<<dr<<endl;
            if(st!=-1){
                int lg=dr-st+1;

                char temp[21] = {};
                strncpy(temp,v+st,lg);
                t[k] = temp;

                dr=-1;
                st=-1;

                cout<<"Cuvantul curent este: '"<< temp << "' - "
                << t[k]
                << endl;
                k++;
            }
        }
    }

    if(st!=-1) {
        int lg=dr-st+1;

        char temp[21] = {};
        strncpy(temp,v+st,lg);
        t[k] = temp;

        dr=-1;
        st=-1;

        cout<<"Cuvantul curent este: '"<< temp << "' - "
        << t[k]
        << endl;
        k++;
    }
//    sortareLexicografica(t,k);

    cout << "Rezultat final" << endl;
    for(int i=0;i<k;i++){
        cout<<t[i]<<"\n";
    }

    return 0;
}
