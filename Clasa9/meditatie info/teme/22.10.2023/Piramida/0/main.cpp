#include <iostream>
#include <climits>
using namespace std;

int main()
{
   int n,x;
   cin>>n;
   int MAX=INT_MIN;
   int ap=0;
    for (int i=1;i<=n;i++){
        cin>>x;
        if (x>MAX){
            MAX=x;
            ap=1;
        }
      else{
        if (MAX==x)
            ap++;

      }
    }
    cout<<MAX<<" "<<ap;
    return 0;
   }





