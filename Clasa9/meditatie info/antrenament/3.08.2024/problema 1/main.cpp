#include <iostream>

using namespace std;
int a[101][101];
int b[101][101];

void af(int a[101][101],int n, char *mesaj) {
    cout<<mesaj<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int n,aux;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }

    /// sa simetrizam fata de linia din mijloc
    /// un element a[i][j] se interschimba cu a[n-i+1][j]

    for(int i=1;i<n/2+1;i++){
        for(int j=1;j<=n;j++){
            aux=a[i][j];
            a[i][j]=a[n-i+1][j];
            a[n-i+1][j]=aux;
        }
    }
    af(a, n, "matricea dupa ce am simetrizat-o fata de linia din mijloc:");

    for(int i=1;i<n/2+1;i++){
        for(int j=1;j<=n;j++){
            aux=a[i][j];
            a[i][j]=a[n-i+1][j];
            a[n-i+1][j]=aux;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<n/2+1;j++){
            int aux=a[i][j];
            a[i][j]=a[i][n-j+1];
            a[i][n-j+1]=aux;
        }
    }
    af(a,n, "matricea dupa ce am simetrizat-o fata de coloana din mijloc:");

    for(int i=1;i<=n;i++){
        for(int j=1;j<n/2+1;j++){
            int aux=a[i][j];
            a[i][j]=a[i][n-j+1];
            a[i][n-j+1]=aux;
        }
    }
    /**
5
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55
    **/

    /// sa simetrizam matricea fata de diagonala principala

    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            int aux=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=aux;

        }
    }
    af(a,n, "matricea dupa ce am simetrizat-o pe diagonala principala");
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            int aux=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=aux;

        }
    }
    for (int i=1;i<n;i++)
        for (int j=1;i+j<n+1;j++) {/// vizitez doar deasupra diagonalei secundare
            int aux=a[i][j];
            a[i][j]=a[n-i+1][n-j+1];
            a[n-i+1][n-j+1]=aux;
        }


    af(a,n,"matricea dupa ce am simetrizat-o pe diagonala secundara");

    for (int i=1;i<n;i++)
        for (int j=1;i+j<n+1;j++) {/// vizitez doar deasupra diagonalei secundare
            int aux=a[i][j];
            a[i][j]=a[n-i+1][n-j+1];
            a[n-i+1][n-j+1]=aux;
        }
    /// sa "rasturnam" matricea la stanga

/**
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55



**/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            b[i][j]=a[j][n-i+1];
        }
    }
    af(b,n,"matricea daca o rotim la 90 de grade in sens trigonometric");
    return 0;
}
