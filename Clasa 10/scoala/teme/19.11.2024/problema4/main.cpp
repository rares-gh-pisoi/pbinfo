#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("problema4.in");
int main()
{
    int n;
    while(fin>>n){
        while(n>9)
            n/=10;
        cout<<n;
    }
    return 0;
}
