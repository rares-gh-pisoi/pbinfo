#include <iostream>
#include <fstream>

using namespace std;

ifstream std ("9lan.in");
ofstream ("9lan.out");

int n;

int main()
{
    input>>n;
    if(n==0)
        output<<1;
    else
    {
        if(n%2==1)
            output<<"9";
        if(n%2==0)
            output<<"1";
    }
    return 0;
}
