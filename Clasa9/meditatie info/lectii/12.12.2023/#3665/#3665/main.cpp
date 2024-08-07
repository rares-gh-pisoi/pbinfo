#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int cp=-1;
    do{
        int c=n%10;
        if(c%2==0){
            if(c>cp){
                cp=c;
            }
        }
        n/=10;
    }while(n!=0);
    if(cp==-1){
        cout<<10;
    }else{
        cout<<cp;
    }
    return 0;
}
