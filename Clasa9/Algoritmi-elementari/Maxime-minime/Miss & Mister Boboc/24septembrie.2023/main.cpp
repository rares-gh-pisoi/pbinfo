#include <iostream>

using namespace std;

int main()
{
int x;
cin>>x;
int y=x%100;
x=x/100;

if (y!=0)
    x++;
cout<<x*100;

}
