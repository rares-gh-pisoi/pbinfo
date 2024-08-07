#include <iostream>

using namespace std;
int v[26];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    cout<<"The length of the Array is: "<<sizeof(v)/sizeof(v[0])<<endl;
    for(int i=1;i<=n;i++){
        int pp=0;
        int d;

        /// verificam daca este patrat perfect
        if(v[i]==0 || v[i]==1){
            pp=1;
            d=v[i];
        }else{
            for(d=2;d*d<=v[i];d++){
                if(d*d==v[i]){
                    pp=1;
                    break;
                }
            }
        }


        if(pp==1){
            ///mutam elementele vectorului cu o pozitie la dreapta
            for(int j=n;j>=i;j--){
                v[j+1]=v[j];
            }

            v[i]= d;
            n++;
            i++;
        }

        cout<<i<<" The length of the Array is: "<<sizeof(v)/sizeof(v[0])<<endl;
    }

     cout<<" The length of the Array is: "<<sizeof(v)/sizeof(v[0])<<endl;
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
