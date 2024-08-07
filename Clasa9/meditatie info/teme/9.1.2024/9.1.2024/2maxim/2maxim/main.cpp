#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=1;i<=n;i++){
        int nr;
        cin>>nr;
        if(nr>max1){
            max2=max1;
            max1=nr;
        }else if(nr>max2){
            max2=nr;
        }
    }
    cout<<max1<<" "<<max2;
    return 0;
}
