#include <iostream>
#include <string>
using namespace std;
int main() {
    string red;

    while (getline(cin, red)) {
        if (red=="#") break;
        int brojCifri= 0;
        for (int i=0; i<red.length(); i++) {
            if (red[i]>='0' && red[i]<='9') {
                brojCifri++;
            }

        }
        cout<<brojCifri<< ":";

        for (char c = '0'; c<='9'; c++) {
            for (int i=0; i<red.length(); i++) {
                if (red[i]==c) {
                    cout<<c;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}