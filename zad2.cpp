#include <iostream>
using namespace std;
int maxCifra(int broj) {
    if  (broj==0) {
        return 0;
    }
    int posl= broj%10;
    int ostatok= broj/10;

    int maxOdOstatok= maxCifra(ostatok);

    if (posl > maxOdOstatok) {
        return posl;
    } else {
        return maxOdOstatok;
    }
}

int main() {
    int broj;
    while (cin >> broj) {
        int rezultat= maxCifra(broj);
        cout<<rezultat<<endl;
    }
}