#include <iostream>
using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {
        int maxBroj = 0;
        int maxCifra = 0;

        for (int i = 0; i < N; i++) {
            int broj;
            cin >> broj;

            int prvaCifra = broj;
            while (prvaCifra >= 10) {
                prvaCifra /= 10;
            }

            if (prvaCifra > maxCifra) {
                maxCifra = prvaCifra;
                maxBroj = broj;
            }
        }

        cout << maxBroj << endl;
    }

    return 0;
}