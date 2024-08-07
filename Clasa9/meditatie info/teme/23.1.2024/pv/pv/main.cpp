#include <iostream>

using namespace std;
int v[501],i,n,s1,s2,cnt,s3;
int main()
{
    cin>>n;
    // s1=suma elementelor pare

    s1=0;
    // s2=suma valorilor aflate pe pozitii pare


    s2=0;
    // Să se determine numărul numerelor din șir care sunt divizibile cu 10

    cnt=0;
    // Să se determine suma numerelor divizibile cu 3 și aflate pe poziții impare

    s3=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            s1+=v[i];
        }
        if(i%2==0){
            s2+=v[i];
        }else{
            if(v[i]%3==0){
                s3+=v[i];
            }
        }
        if(v[i]%10==0){
            cnt++;
        }

    }
    for(int i=n;i>=1;i--){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    cout<<s1<<"\n";
    cout<<s2<<"\n";
    cout<<cnt<<"\n";
    cout<<s3;
    return 0;
}
