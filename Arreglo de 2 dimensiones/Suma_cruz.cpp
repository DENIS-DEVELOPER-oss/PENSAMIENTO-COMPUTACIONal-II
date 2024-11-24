#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz (n x n, debe ser impar): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "El tamaño de la matriz debe ser impar." << endl;
        return 0;
    }

    int m[100][100];

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> m[i][j];
        }
    }

    cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    int c = n / 2;
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += m[c][i];
        if (i != c) {  
            suma += m[i][c];
        }
    }

    cout << "\nSuma de la cruz interna: " << suma << endl;

    return 0;
}