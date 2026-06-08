#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

bool isVowel (char a){
    if (a=='a' ||
        a=='e' ||
        a=='i' ||
        a=='o' ||
        a=='u'){
            return true;
        } else{
            return false;
        }
}

int main(){
    const int SIZE = 100000;
    char a[SIZE];
    int count = 0;

    for (int i=0; i<SIZE; i++){
        cin>>noskipws>>a[i];
        if (a[i] == '#'){
            break;
        }
        a[i]= tolower(a[i]);
    }

    for (int i=0; i < SIZE; i++){
        if (a[i]=='#'){
            break;
        }
        if (isVowel(a[i]) && isVowel(a[i+1])){
            cout<< a[i] << a[i+1] << endl;
            count++;
        }
    }

    cout<< count << endl;

    return 0;
}