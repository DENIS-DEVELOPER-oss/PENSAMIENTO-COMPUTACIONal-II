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

    cout << "Ingrese los valores para el contorno de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> m[i][j];
            } else {
                m[i][j] = 0;
            }
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