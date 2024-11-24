#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz (n x n, n debe ser par): ";
    cin >> n;

    if (n % 2 != 0) {
        cout << "El tamaño de la matriz debe ser par." << endl;
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

    cout << "\nMatriz original:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    int mitad = n / 2;
    int temp;

    // Intercambiar cuadrante 1 con cuadrante 2
    for (int i = 0; i < mitad; i++) {
        for (int j = 0; j < mitad; j++) {
            temp = m[i][j];
            m[i][j] = m[i][j + mitad];
            m[i][j + mitad] = temp;
        }
    }

    // Intercambiar cuadrante 3 con cuadrante 4
    for (int i = 0; i < mitad; i++) {
        for (int j = 0; j < mitad; j++) {
            temp = m[i + mitad][j];
            m[i + mitad][j] = m[i + mitad][j + mitad];
            m[i + mitad][j + mitad] = temp;
        }
    }

    cout << "\nMatriz con cuadrantes intercambiados:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}