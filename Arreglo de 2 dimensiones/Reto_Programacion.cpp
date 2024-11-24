#include <iostream>

using namespace std;

int main() {
    int filas, columnas, numero = 2;

    // Solicitar el tamaño de la matriz
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    int matriz[100][100];

    // Llenar la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (j % 2 == 0) { 
                matriz[i][j] = 0;
            } else {
                matriz[i][j] = numero;
                numero += 2;
            }
        }
    }
    cout << "\nMatriz resultante:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
