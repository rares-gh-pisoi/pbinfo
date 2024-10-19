#include <iostream>

using namespace std;
int cmmnr(int n) {
    int v[15],pozFolosita;
    int pz=0;
    while(n!=0) {
        int c=n%10;
        n/=10;
        pz++;
        v[pz]=c;
    }
    int srt;
    do {
        srt=1;
        for(int i=1;i<pz;i++){
            if(v[i]>v[i+1]){
                srt=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }

    }while(srt==0);
    int nr=0;

    if (v[1] != 0) {
        for(int i=1;i<=pz;i++){
            nr=nr*10+v[i];
        }
    } else {
        for (int i=2;i<=pz;i++)
            if (v[i] != 0) {
                nr = v[i];
                pozFolosita = i;
                break;
            }
        for(int i=1;i<=pz;i++){
            if (i!=pozFolosita)
                nr=nr*10+v[i];
        }
    }



    return nr;
}
int main() {
    int n;
    cin>>n;
    cout<<cmmnr(n);
    return 0;
}
