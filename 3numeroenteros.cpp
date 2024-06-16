//fecha: 16/06/24
////Autor:Lopez Quiroz Wagner
//tema: funciones varias
//Una función recibe 3 números enteros. La función devuelve verdadero si uno de esos números es la suma de los otros 2.
#include <iostream>

bool esSumaDeOtrosDos(int a, int b, int c) {
    if (a == b + c || b == a + c || c == a + b) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num1, num2, num3;

    // Solicitamos al usuario que ingrese los tres números
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer número: ";
    std::cin >> num3;

    // Llamamos a la función y mostramos el resultado
    if (esSumaDeOtrosDos(num1, num2, num3)) {
        std::cout << "Uno de los números es la suma de los otros dos." << std::endl;
    } else {
        std::cout << "Ninguno de los números es la suma de los otros dos." << std::endl;
    }

    return 0;
}
