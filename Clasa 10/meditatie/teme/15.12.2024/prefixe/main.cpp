#include <iostream>
#include <cstring>
using namespace std;
char v[11];
int main()
{
    cin>>v;
    int n=0;
    while(v[n]!='\0')
        n++;
    int i=n;
    while(i){
        int j=0;
        while(j<i){
            cout<<v[j];
            j++;
        }
        cout<<"\n";
        i--;
    }
    i=0;
    while(v[i]!='\0'){
        int j=i;
        while(v[j]!='\0'){
            cout<<v[j];
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}
