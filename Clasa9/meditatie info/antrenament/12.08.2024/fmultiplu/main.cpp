#include <iostream>

using namespace std;
int multipli(int a,int b, int c){
    return c/b - c / (a-1);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<multipli(a,b,c);
    return 0;
}
