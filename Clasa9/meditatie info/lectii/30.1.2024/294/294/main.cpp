#include <iostream>

using namespace std;
int v[100];
int main()
{
    int n;
    cin>>n;
    int ogl=0;
    int vogl=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    while(v[0]!=0){
        int c=v[0]%10;
        ogl=ogl*10+c;
        v[0]/=10;
    }
    for(int i=1;i<n;i++){
        if(v[i]==ogl){
            vogl=1;
        }
    }
    if(vogl==0){
        cout<<"NU";
    }else{
        cout<<"DA";
    }
    return 0;
}
