#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char voc[]="AEIOUaeiou";
    char nume[20], prenume[20];
    // citim ume si prenume
    cin >> nume;
    cin >> prenume;

    for(int j=0;j<strlen(prenume);j++){
        if(strchr(voc,prenume[j])==NULL){
            cout<<prenume[j];
        }
    }

    cout << " " << nume;

    return 0;
}
