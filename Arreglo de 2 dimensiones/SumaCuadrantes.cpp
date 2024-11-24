#include <iostream>

using namespace std;
int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz NxN: ";
    cin >> n;
    if (n % 2 != 0) {
        cout << "N debe ser un numero par." << endl;
        return 0;
    }
    int matriz[100][100];
    cout << "Ingrese los numeros de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "\nNumeros Ingresados:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    int mitad = n / 2;
    int sumaQ1 = 0, sumaQ2 = 0, sumaQ3 = 0, sumaQ4 = 0;

    for (int i = 0; i < mitad; i++) {
        for (int j = 0; j < mitad; j++) {
            sumaQ1 += matriz[i][j];
            sumaQ2 += matriz[i][j + mitad];
            sumaQ3 += matriz[i + mitad][j]; 
            sumaQ4 += matriz[i + mitad][j + mitad];
        }
    }
    cout << "\nSuma del Cuadrante 1: " << sumaQ1 << endl;
    cout << "Suma del Cuadrante 2: " << sumaQ2 << endl;
    cout << "Suma del Cuadrante 3: " << sumaQ3 << endl;
    cout << "Suma del Cuadrante 4: " << sumaQ4 << endl;

    return 0;
}