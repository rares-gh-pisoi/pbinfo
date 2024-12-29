#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("problema5.in");
int main()
{
    int n;
    int ok=1;
    while(fin>>n){
        while(n>9)
            n/=10;
        if(n%2==0){
            ok=0;
            break;
        }
    }
    cout<<ok;
    return 0;
}
