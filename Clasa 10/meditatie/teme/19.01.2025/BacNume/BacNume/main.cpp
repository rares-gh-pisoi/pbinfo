#include <iostream>
#include <cstring>
using namespace std;
void FNume(char s[], char id[]){
    char *p=strchr(s,' ');
    strcpy(id,p+1);
    strcat(id,"2022");
}
int main()
{

    return 0;
}
