#include <iostream>;
#include <climits>;

using namespace std;
// Cerinta
// Să se scrie un program care citește un șir de n numere naturale şi determină numărul din șir
// care are prima cifră minimă. Dacă există mai multe numere cu prima cifră minimă,
// se va determina cel mai mare dintre acestea.

// Date de intrare
// Programul citește de la tastatură numărul n, iar apoi n numere naturale.

// Date de ieşire
// Programul afișează pe ecran numărul cerut.

// Restricţii şi precizări
// 1 ≤ n ≤ 10000
// cele n numere citite vor fi mai mici decât 2.000.000.000

int main()
{
    // Se citeste numarul n
    int n;
    cin >> n;

    // Prima cifra anterior citita
    int pca = 10;

    // Declaram numarul ce trebuie afisat
    int nr_prima_cifra_min;

    // Citim de la tastatura n numere
    for(int i=1;i<=n;i++) {
        int nrc;
        cin >> nrc;

        // Calculam prima cifra
        int pcc = nrc;
        while (pcc>=10) {
            pcc /= 10;
        }

        // daca prima cifra curent calculata este mai mica decat prima cifra anterioara
        if (pcc < pca) {
            pca = pcc;
            nr_prima_cifra_min = nrc;
        } else if (pca == pcc) {
            // Verifcam daca numarul curent citit este mai mare decat numarul minim anterior

            if (nrc > nr_prima_cifra_min) {
                // Doua numere cu aceeasi prima cifra minima. Il oprim pe cel mai mare
                nr_prima_cifra_min = nrc;
            }
        }
    }

    cout << nr_prima_cifra_min;
}
