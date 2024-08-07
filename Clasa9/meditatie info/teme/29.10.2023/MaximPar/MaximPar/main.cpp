#include <iostream>
#include <fstream>
#include <climits>

using namespace std;
ifstream fin ("maximpar.in");
ofstream fout ("maximpar.out");
int main(){
int n,x;
fin>>n;
int Max=INT_MIN;
int ap=0;
for (int i=1;i<=n;i++){
    fin>>x;
    if (x>Max && x%2==0){
        Max=x;
        ap=1;
    }
    else {
        if (x==Max)
            ap++;
    }
}if ()
    fout<<Max<<" "<<ap;

    return 0;
}
