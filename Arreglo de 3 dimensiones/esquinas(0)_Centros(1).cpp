#include <iostream>
using namespace std;

int main() {
    int arr[3][3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                // Verificar si es una esquina
                if ((i == 0 || i == 2) && (j == 0 || j == 2) && (k == 0 || k == 2)) {
                    arr[i][j][k] = 0;
                } else {
                    arr[i][j][k] = 1;
                }
            }
        }
    }

    cout << "Contenido del arreglo 3D (3x3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Capa " << i + 1 << ":" << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}