#include <iostream>

using namespace std;

int main()
{
    int an;
    cin>>an;
    if (an%4==0 && an%400!=100 && an%400!=200 && an%400!=300)
        cout<<"bisect";
    else
        cout<<"nebisect";
    return 0;
}
