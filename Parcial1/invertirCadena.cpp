#include <iostream>

int main() {
    char str[100]; // Buffer para almacenar la cadena
    std::cout << "Ingrese una cadena: ";
    std::cin.getline(str, 100);

    // Encontrar el final de la cadena manualmente
    char* ptr = str;
    while (*ptr) {
        ptr++;  // Avanza hasta el carácter nulo
    }
    ptr--;  // Retrocede una posición para evitar el carácter nulo

    // Invertir la cadena usando punteros
    char* start = str;
    while (start < ptr) {
        char temp = *start;
        *start = *ptr;
        *ptr = temp;
        start++;
        ptr--;
    }

    std::cout << "Cadena invertida: " << str << std::endl;
    return 0;
}