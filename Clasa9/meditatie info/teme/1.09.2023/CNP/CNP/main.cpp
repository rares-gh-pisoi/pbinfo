#include <iostream>

using namespace std;

int main()
{
    long long CNP;
    cin>>CNP;

    // calculam an

    long long a = CNP;
    a = a / 10000000000;
    a = a % 100;

    if (a < 10) {
        cout <<"0"<<a;
    } else {
        cout <<a;
    }


    cout<<" ";

    long long l=CNP;
    l=CNP /100000000;

    l=l % 100;

    if(l<10){
        cout<<"0"<<l;
    } else {
        cout<<l;
    }

    cout<<" ";

    int z=CNP;
    z=CNP/1000000;
    z=z%100;
    if(z<10){
        cout<<"0"<<z;
    }else{
        cout<<z;
    }
    return 0;
}
