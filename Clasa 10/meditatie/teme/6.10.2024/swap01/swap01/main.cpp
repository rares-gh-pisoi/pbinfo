#include <bits/stdc++.h>
using namespace std;

int sp[100001];  // a[0], a[1], a[2], a[3]...., a[999];
int n;
int k;     // nr de cifre 1 din sir

int main()
{
    int x;
    // citirea sirului
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        sp[i] = sp[i - 1] + x;
    }

    k = sp[n];
    int smax=0;
    for(int i=k;i<=n;i++){
        if(sp[i]-sp[i-k]>smax){
            smax=sp[i]-sp[i-k];
        }
    }

    cout << k - smax;

    return 0;

}
