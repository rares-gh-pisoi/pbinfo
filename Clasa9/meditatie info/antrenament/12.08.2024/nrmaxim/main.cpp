#include <iostream>
#include <climits>
using namespace std;

/// vrem o functie careia ii dau data de intrare un n si ea sa returneze cifra minima si cifra maxima a lui n
/// avand 2 rezultate nu e suficienta o functie operand

/**void calcul(int n, int &cmin, int &cmax) {

    if (n == 0) {
        cmin = 0;
        cmax = 0;
        return;
    }

    cmin = 9;
    cmax = 0;
    while (n!=0) {
        if (n%10 < cmin)
            cmin = n%10;
        if (n%10 > cmax)
            cmax = n%10;
        n /= 10;
    }
}
**/
/**
void sum_cif(int n,int &m){
    m=0;
    while(n!=0){
        int c=n%10;
        m+=c;
        n/=10;
    }
}
**/
void sub(int n, int m){
    for(int i=n*m;i>0;i-=m){
        cout<<i<<" ";
    }
}
int a,m;
int main() {
    cin>>a>>m;
    sub(a,m);
    /**
    calcul(a, x, y); /// aici gandesc asa: ii dau functiei un numar prin primul parametru si stiu ca ea imi lasa in ceilalti 2 rezultate
    cout<<"cifra minima "<<x<<"\n";
    cout<<"cifra maxima "<<y<<"\n";

    calcul(8965, x, y); /// aici gandesc asa: ii dau functiei un numar prin primul parametru si stiu ca ea imi lasa in ceilalti 2 rezultate
    cout<<"cifra minima "<<x<<"\n";
    cout<<"cifra maxima "<<y<<"\n";

    calcul(0, x, y); /// aici gandesc asa: ii dau functiei un numar prin primul parametru si stiu ca ea imi lasa in ceilalti 2 rezultate
    cout<<"cifra minima "<<x<<"\n";
    cout<<"cifra maxima "<<y<<"\n";
    **/

    return 0;
}
