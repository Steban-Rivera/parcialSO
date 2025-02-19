#include <iostream>
#include <vector>

using namespace std;

// Función para imprimir una matriz 2D
void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            cout << valor << " ";
        }
        cout << endl;
    }
}

// Función para transponer una matriz
vector<vector<int>> transponerMatriz(const vector<vector<int>>& matriz) {
    if (matriz.empty()) return {}; // Retornar vacío si la matriz está vacía
    
    int filas = matriz.size();
    int columnas = matriz[0].size();
    
    vector<vector<int>> transpuesta(columnas, vector<int>(filas));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    
    return transpuesta;
}

int main() {
    int filas, columnas;

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas));

    // Ingresar los valores de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Imprimir la matriz original
    cout << "\nMatriz original:" << endl;
    imprimirMatriz(matriz);

    // Obtener la transpuesta y mostrarla
    vector<vector<int>> matrizTranspuesta = transponerMatriz(matriz);

    cout << "\nMatriz transpuesta:" << endl;
    imprimirMatriz(matrizTranspuesta);

    return 0;
}
