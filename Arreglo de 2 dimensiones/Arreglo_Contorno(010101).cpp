#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz (n x n, debe ser mayor que 2): ";
    cin >> n;

    if (n <= 2) {
        cout << "El tamaño de la matriz debe ser mayor que 2." << endl;
        return 0;
    }

    int m[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                m[i][j] = (i + j) % 2;
            } else {
                m[i][j] = -1;
            }
        }
    }
    cout << "Ingrese los valores del centro de la matriz:\n";
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> m[i][j];
        }
    }
    cout << "\nMatriz resultante:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}