#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "El tamaño de la matriz debe ser impar." << endl;
        return 0;
    }
    int m[100][100]; // Matriz
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

    int sd1 = 0, sd2 = 0, sf = 0, sc = 0, c = n / 2;

    for (int i = 0; i < n; i++) {
        sd1 += m[i][i]; 
        sd2 += m[i][n - 1 - i];
    }

    for (int i = 0; i < n; i++) {
        sf += m[c][i];
        sc += m[i][c];
    }
    cout << "\nSuma de la Diagonal Principal: " << sd1 << endl;
    cout << "Suma de la Diagonal Secundaria: " << sd2 << endl;
    cout << "Suma de la Fila Central: " << sf << endl;
    cout << "Suma de la Columna Central: " << sc << endl;

    return 0;
}