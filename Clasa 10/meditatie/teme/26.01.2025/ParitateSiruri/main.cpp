#include <bits/stdc++.h>
using namespace std;

ifstream fin("paritatesiruri.in");
ofstream fout("paritatesiruri.out");

int main()
{
    int n;
    fin >> n;
    for(int q = 1 ; q <= n ; ++q)
    {
        char s[10000];
        fin >> s;

        for(int k=1;s[k]!='\0';k+=2){
                fout << s[k];
        }

        fout << ' ';

        for(int k=0;s[k]!='\0'; k+=2) {
                fout << s[k];
        }
        fout << '\n';
    }
    return 0;
}
