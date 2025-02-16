#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char voc[]="AEIOUaeiou";
    char nume[20], prenume[20],t[20];
    // citim ume si prenume
    cin >> nume;
    cin >> prenume;
    int lg=strlen(prenume);
    for(int j=0;j<lg;j++){
        if(strchr(voc,prenume[j])!=NULL){
            strcpy(t,prenume+j+1);
            strcpy(prenume+j,t);
        }
    }

    cout<<prenume<< " " << nume;

    return 0;
}
