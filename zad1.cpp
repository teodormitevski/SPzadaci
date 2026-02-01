#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;

    int m,n;
    cin>>m>>n;

    int matrix[100][100];


    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        int suma=0;
        for(int j=0;j<n;j++) {
            suma=suma+matrix[i][j];
        }

        for (int j=0;j<n;j++) {
            if (suma>x) {
                matrix[i][j]=1;
            }
            else if (suma<x) {
                    matrix[i][j]=-1;
            } else {
                    matrix[i][j]=0;
                }
            }
        }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout<<matrix[i][j];
            if (j<n-1) {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
    }
