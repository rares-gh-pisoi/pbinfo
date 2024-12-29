#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("eratostene0.in");
ofstream fout("eratostene0.out");

long long fr[1000001];

void eratostene(){

    for(int i=1;i<=1000000;i++){
       for(int j=i;j<=1000000;j=j+i)   /// merg pe multiplii lui i si cresc fr[j] cu i . j=multiplu al lui i
            fr[j]+=i;
    }
    /// fr[i]=suma divizorilor  lui i
    ///fac sume partiale pe fr  => fr[i]=suma divizorilor numerelor din [1...i]
    /// sumele partiale ma ajuta sa determin in O(1) suma divizorilor numerelor din [x,y] => fr[y]-fr[x-1]
    for(int i=2;i<=1000000;i++){
        fr[i]=fr[i]+fr[i-1];
    }
}

int main()
{
    int n,x,y;
    fin>>n;
    eratostene();
    for(int i=1;i<=n;i++){
        fin>>x>>y;
        fout<<fr[y]-fr[x-1]<<"\n";
    }
    return 0;
}
