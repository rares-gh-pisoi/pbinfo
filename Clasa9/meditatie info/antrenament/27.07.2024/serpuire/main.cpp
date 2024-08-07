#include <iostream>

using namespace std;
int a[26][26];
int i, j, n, s;
int main()
{
    int n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for (s = 2; s<=n+1; s++) { /// dupa aceasta regula fac doar pana la DS
        if (s % 2 == 1) {
            /// parcurgem diagonala de jos in sus
            for (i=s-1;i>=1;i--) { /// i am gandit ca este linia elementului si plecand de pe coloana 1, linia este suma fixata - 1
                cout<<a[i][s-i] << " ";
            }
        } else {

            for (i=s-1; i>=1;i--) { /// aici gandesc pe i ca fiind coloana si plec de la un element de pe linia 1
                cout<<a[s-i][i]<<" ";
            }
        }
    }

    for (s=n+2;s<=2*n;s++) {

        if (s%2 == 1) {
            for (i=n;s-i<=n;i--) /// aici coloana, s-i parseste mai intai matricea, prin dreapta
                cout<<a[i][s-i]<<" ";
        } else {
            for (i=n;s-i<=n;i--)
                cout<<a[s-i][i]<<" ";
        }

    }



    return 0;
}

/**
3
1 2 3
8 6 3
2 1 7

1 8 2 3 6 2 1 3 7
**/
