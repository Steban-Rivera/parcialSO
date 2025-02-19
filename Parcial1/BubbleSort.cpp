#include <iostream>
#include <vector>

using namespace std;

// Función para ordenar usando Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // Si no hubo intercambios, la lista ya está ordenada
        if (!swapped) break;
    }
}

// Función para imprimir el vector
void imprimirVector(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Pedir tamaño de la lista
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> numeros(n);

    // Leer los números del usuario
    cout << "Ingrese los " << n << " números a ordenar:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    // Imprimir lista original
    cout << "\nLista original: ";
    imprimirVector(numeros);

    // Ordenar con Bubble Sort
    bubbleSort(numeros);

    // Imprimir lista ordenada
    cout << "Lista ordenada: ";
    imprimirVector(numeros);

    return 0;
}
