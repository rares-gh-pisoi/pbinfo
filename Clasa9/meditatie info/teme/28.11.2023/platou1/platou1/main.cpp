#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream in("platou1.in");
ofstream out("platou1.out");
int main() {
    int xmin = 10, k = 0, lg = 1;


    int ca, c;
    in >> ca;

    while (in >> c)
        if (ca == c) {
            lg++;
        } else {
            // Se schimba caracterul citit
            if (k < lg) {
                k = lg;
                xmin = ca;
            } else if (k == lg && ca < xmin) {
                xmin = ca;
            }

            lg = 1;
            ca = c;
        }
    if (k<lg){
        k=lg;
        xmin=c;
    }
    out << k << " " << xmin << endl;
    return 0;

}
