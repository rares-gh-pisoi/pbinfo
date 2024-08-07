#include <iostream>

using namespace std;
int v[100];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int cv=v[i];
        while(cv>=10){
            cv/=10;
        }
        if(cv%2==1){
            for(int j=i;j<n-1;j++){
                v[j]=v[j+1];
            }
            n--;
            i--;
        }
    }

    int ok;
    do{
        ok=1;
        for(int i=0;i<n-1;i++){
            if(v[i]<v[i+1]){
                ok=0;
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }while(ok==0);

    if(n==0){
        cout<<"nu exista";
    }else{
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
