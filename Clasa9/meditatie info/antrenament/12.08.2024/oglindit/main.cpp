#include <iostream>

using namespace std;
int oglindit(int n){
    int ogl=0;
    while(n!=0){
        int c=n%10;
        n/=10;
        ogl=ogl*10+c;
    }
    return ogl;
}
int main()
{
    int n;
    cin>>n;
    cout<<oglindit(n);
    return 0;
}
