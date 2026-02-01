#include <iostream>
#include <string>
using namespace std;
int main() {
    char z1,z2;
    cin>>z1>>z2;
    cin.ignore();

    string red;
    while (getline(cin,red)) {
        if (red=="#") break;
        string novRed= "";

        for (int i=0; i<red.length(); i++) {
            if (red[i]==z1) {
                int j =i+1;
                while (j<red.length() && red[j]!=z2) {
                    j++;
                }
                if (j<red.length()) {
                    for (int k=i+1; k<j; k++) {
                        novRed+=red[k];
                    }
                    i=j;
                }
            }
        }
        cout<<novRed<<endl;
    }
    return 0;

}