#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    char op;
    cin>>op;
    switch (op) {
    case '+':
        cout<<a+b;
        break;
    case '-':
        if(a-b>0)
        cout<<a-b;
        else if(a-b<0);
        cout<<(a-b)*(-1);
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        if (a/b>0)
        cout<<a/b;
        else if(a/b==0)
            cout<<b/a;
        break;

    }

    return 0;
}
